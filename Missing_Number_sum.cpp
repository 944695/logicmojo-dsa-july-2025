class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        return (nums.size() * (nums.size() + 1) / 2) - sum;
    }
};

// https://leetcode.com/problems/missing-number/
// Constraints: n == nums.length, 1 <= n <= 10^4, 0 <= nums[i] <= n, All the numbers of nums are unique.
// Time Complexity: O(n)
// Auxiliary Space: O(1)