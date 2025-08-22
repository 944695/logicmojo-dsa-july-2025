class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int min;
        
        if(a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
        
        if(b == 0)
        {
            return a;
        }
        else
        {
            return gcd(b, a % b);
        }
    }
};

// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
// Constraints: 1 ≤ a, b ≤ 10^9
// Time Complexity: O(log(min(a, b)))
// Auxiliary Space: O(log min(a, b))