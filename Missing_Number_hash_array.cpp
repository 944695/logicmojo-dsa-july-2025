class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> map(nums.size() + 1, 0);

        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        for(int i = 0; i < map.size(); i++)
        {
            if(map[i] == 0)
            {
                return i;
            }
        }

        return -1;
         
    }
};

// https://leetcode.com/problems/missing-number/
// Constraints: n == nums.length, 1 <= n <= 10^4, 0 <= nums[i] <= n, All the numbers of nums are unique.
// Time Complexity: O(n)
// Auxiliary Space: O(n)