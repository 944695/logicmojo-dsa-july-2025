class Solution {
public:
    bool isPowerOfTwo(int n) {
        long num = n;

        if(num < 0)
        {
            num = abs(num);
        }

        if(num == 0)
        {
            return false;

        }
        long x = log(num) / log(2);

        return n == pow(2, x);
    }
};

// https://leetcode.com/problems/power-of-two/description/
// Constraints: -2^31 <= n <= 2^31 - 1
// Time Complexity: O(1)
// Auxiliary Space: O(1)