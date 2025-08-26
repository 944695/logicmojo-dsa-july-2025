class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid;

        while(l <= r)
        {
            mid = l + (r - l) / 2;
            
            if(target > nums[mid])
            {
                l = mid + 1;
            }
            else if(target < nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                if(target == nums[mid])
                {
                    return mid;
                }
            }
        }

        return -1;
    }
};

// https://leetcode.com/problems/binary-search/
// Constraints: 1 <= nums.length <= 10^4, -10^4 < nums[i], target < 10^4, All the integers in nums are unique., nums is sorted in ascending order.
// Time Complexity: O(log n)
// Auxiliary Space: O(1)