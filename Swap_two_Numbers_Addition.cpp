class Solution {
  public:
    pair<int, int> get(int a, int b) {
        // code here
        pair<int, int> p;
        a = a + b;
        b = a - b;
        a = a - b;
        p.first = a;
        p.second = b;
        return p;
    }
};

// https://www.geeksforgeeks.org/problems/swap-two-numbers3844/1
// Constraints: 1 ≤ a, b ≤ 10^6
// Time Complexity: O(1)
// Auxiliary Space: O(1)