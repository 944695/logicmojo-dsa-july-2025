class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(((n % 2) == 0) && (n > 1))
        {
            n /= 2;
        }

        if(n == 1)
        {
            return true;
        }
        else
        {
            return false;
        }


    }
};

// https://leetcode.com/problems/power-of-two/description/
// Constraints: -2^31 <= n <= 2^31 - 1
// Time Complexity: O(log n)
// Auxiliary Space: O(1)