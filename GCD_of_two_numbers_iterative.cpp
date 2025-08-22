class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int temp;
        
        if(a < b)
        {
            temp = a;
            a = b;
            b = temp;
            
        }
        
        while(b != 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }
        
        return a;
    }
};

// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
// Constraints: 1 ≤ a, b ≤ 10^9
// Time Complexity: O(log(min(a, b)))
// Auxiliary Space: O(1)
