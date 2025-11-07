// Last updated: 07/11/2025, 19:56:31
// class Solution {
// public:
//     long long maxPower(vector<int>& stations, int r, int k) {
//         int n= stations.size();
//         vector<int> power(n, 0); 
//         int curr=0;
//         int p=0;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=-r;j<=r;j++)
//             {
//                 if(i+j>=0 && i+j <n)
//                 {
//                     power[i]+=stations[i+j];

//                 }
//             }
//             // we get og sum 
//         }


//         return 0;
//     }
// };

class Solution {
public:
    vector<long long> temp;

    bool fn(vector<int>& arr, vector<long long>& prefix, int r, long long k, long long mid) {
        int n = arr.size();
        temp.assign(n, 0);
        long long extra = 0;

        for (int i = 0; i < n; i++) {
            int pre = (i > r) ? (i - r - 1) : -1;
            if (pre >= 0) extra -= temp[pre];

            int left = max(0, i - r);
            int right = min(n - 1, i + r);
            long long val = prefix[right] - (left > 0 ? prefix[left - 1] : 0);
            val += extra;

            if (val >= mid) continue;

            long long req = mid - val;
            if (req > k) return false;
            int idx = min(i + r, n - 1);
            temp[idx] = req;
            extra += req;
            k -= req;
        }
        return true;
    }

    long long maxPower(vector<int>& stations, int r, int k) {
        int n = stations.size();
        vector<long long> prefix(n);
        prefix[0] = stations[0];
        for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + stations[i];

        long long low = 0;
        long long high = accumulate(stations.begin(), stations.end(), 0LL) + k;
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2LL;

            if (fn(stations, prefix, r, k, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};