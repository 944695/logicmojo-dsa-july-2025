class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i = 0; i <= nums.size(); i++)
        {
            map[i] = 0;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }

        for(const auto& pair: map)
        {
            if(pair.second == 0)
            {
                return pair.first;
            }
        }

        return -1;
         
    }
};

// https://leetcode.com/problems/missing-number/
// Constraints: n == nums.length, 1 <= n <= 10^4, 0 <= nums[i] <= n, All the numbers of nums are unique.
// Time Complexity: O(n)
// Auxiliary Space: O(n)