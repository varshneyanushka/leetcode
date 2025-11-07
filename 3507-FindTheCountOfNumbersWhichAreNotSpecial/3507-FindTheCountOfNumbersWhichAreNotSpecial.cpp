// Last updated: 07/11/2025, 19:56:27
class Solution {
public:
    int nonSpecialCount(int l, int r) {
     if (l > r) return 0;

        
        std::vector<int> primes = sieveOfEratosthenes(static_cast<int>(sqrt(r)));

        
        std::unordered_set<int> specialNumbers;

       
        for (int prime : primes) {
            long long perfectSquare = static_cast<long long>(prime) * prime;
            if (perfectSquare > r) break; 
            if (perfectSquare >= l) {
                specialNumbers.insert(static_cast<int>(perfectSquare));
            }
        }

       
        int totalNumbers = r - l + 1;

        
        int nonSpecialCount = totalNumbers - specialNumbers.size();

        return nonSpecialCount;
    }

private:
    
    std::vector<int> sieveOfEratosthenes(int n) {
        std::vector<bool> isPrime(n + 1, true);
        std::vector<int> primes;

        for (int i = 2; i <= n; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
                for (int j = i * 2; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return primes;
    }
};