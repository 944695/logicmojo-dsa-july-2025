class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> primes;
        vector<bool> isPrime(n + 1, true);
        
        isPrime[0] = false;
        isPrime[1] = false;
        
        for(int i = 2; i * i <= n; i++)
        {
            if(isPrime[i])
            {
                for(int j = 2 * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        
        for(int i = 2; i <= n; i++)
        {
            if(isPrime[i])
            {
                primes.push_back(i);
            }
        }
        
        return primes;
    }
};

// https://www.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1
// Constraints: 0 <= num <= 10^9, 1 <= i <= 32
// Time Complexity: O(n * log(log(n)))
// Auxiliary Space: O(n)