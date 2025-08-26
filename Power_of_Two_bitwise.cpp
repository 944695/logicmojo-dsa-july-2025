class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        return (n & (n - 1)) == 0;
    }
};

// https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1
// Constraints: 0 ≤ n < 10^9
// Time Complexity: O(1)
// Auxiliary Space: O(1)