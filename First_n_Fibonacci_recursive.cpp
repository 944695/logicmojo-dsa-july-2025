// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> fib;
        
        while(fib.size() != n)
        {
            if(fib.size() == 0)
            {
                fib.push_back(0);
            }
            else if (fib.size() == 1)
            {
                fib.push_back(1);
            }
            else
            {
                fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
            }
        }
        
        return fib;
    }
};

// https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
// Constraints: 0 ≤ n ≤ 30
// Time Complexity: O(2^n)
// Auxiliary Space: O(n)