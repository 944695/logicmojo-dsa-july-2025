// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int a = 0;
        int b = 0;
        int c = 0;
        
        if(n == 0)
        {
            a = 0;
            b = 0;
            c = 0;
        }
        
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                a = 0;
                b = 0;
                c = 1;  
            }
            else
            {
                a = b;
                b = c;
                c = a + b;
            }
        }
        
        return c;
    }
};

// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
// Constraints: 0 ≤ n ≤ 30
// Time Complexity: O(n)
// Auxiliary Space: O(1)