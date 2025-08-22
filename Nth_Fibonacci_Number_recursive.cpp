// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        if(n == 0)
        {
            return 0;
        }
        else if(n == 1)
        {
            return 1;
        }
        else
        {
            return nthFibonacci(n - 1) + nthFibonacci(n - 2);
        }
    }
};

// https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
// Constraints: 0 ≤ n ≤ 30
// Time Complexity: O(2^n)
// Auxiliary Space: O(n)