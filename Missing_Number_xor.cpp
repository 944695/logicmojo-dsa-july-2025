class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            n ^= nums[i];
        }

        for(int i = 0; i <= nums.size(); i++)
        {
            n ^= i;
        }

        return n;
    }
};

// https://leetcode.com/problems/missing-number/
// Constraints: n == nums.length, 1 <= n <= 10^4, 0 <= nums[i] <= n, All the numbers of nums are unique.
// Time Complexity: O(n)
// Auxiliary Space: O(1)