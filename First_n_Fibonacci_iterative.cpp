// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> fib;
        int a;
        int b;
        int c;
        
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                fib.push_back(0);
                a = 0;
                b = 1;
                c = 1;
            }
            else if(i == 2)
            {
                fib.push_back(1);
                a = 0;
                b = 0;
                c = 1;
            }
            else
            {
                a = b;
                b = c;
                c = a + b;
                fib.push_back(c);
            }
        }
        
        return fib;
    }
};

// https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
// Constraints: 0 ≤ n ≤ 30
// Time Complexity: O(n)
// Auxiliary Space: O(n)