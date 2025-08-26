class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums[0];
        bool flag;

        for(int i = 0; i <= nums.size(); i++)
        {
            flag = false;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == i)
                {
                    flag = true;
                    break;
                }
            }

            if(flag == false)
            {
                return i;
            }
        }

        return -1;
    }
};

// https://leetcode.com/problems/missing-number/
// Constraints: n == nums.length, 1 <= n <= 10^4, 0 <= nums[i] <= n, All the numbers of nums are unique.
// Time Complexity: O(n^2)
// Auxiliary Space: O(1)