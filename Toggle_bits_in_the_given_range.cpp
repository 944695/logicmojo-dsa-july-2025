class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        // code here
        for(int i = l; i <= r; i++)
        {
            n ^= (1 << (i - 1));
        }
        
        return n;
    }
};

// https://www.geeksforgeeks.org/problems/toggle-bits-given-range0952/1
// Constraints: 1 <= n <= 105, 1 <= l <=r <= Number of Bits in n
// Time Complexity: O(1)
// Auxiliary Space: O(1)