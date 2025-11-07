// Last updated: 07/11/2025, 19:59:21
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> temp;
        
        // Merging two sorted arrays
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        
        // Add remaining elements of nums1
        while (i < n) {
            temp.push_back(nums1[i]);
            i++;
        }
        
        // Add remaining elements of nums2
        while (j < m) {
            temp.push_back(nums2[j]);
            j++;
        }
        
        int totalSize = n + m;
        
        if (totalSize % 2 == 0) {
            int mid = totalSize / 2;
            return (double)(temp[mid] + temp[mid - 1]) / 2;
        } else {
            return temp[totalSize / 2];
        }
    }
};

