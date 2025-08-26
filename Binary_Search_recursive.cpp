class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int n = binarySearch(nums, target, l, r);
        
        return n;
    }

    int binarySearch(vector<int>& nums, int target, int l, int r)
    {
        int mid = l + (r - l) / 2;

        if(l > r)
        {
            return -1;
        }
        else if(target < nums[mid])
        {
            return binarySearch(nums, target, l, mid - 1);
        }
        else if(target > nums[mid])
        {
            return binarySearch(nums, target, mid + 1, r);
        }
        else
        {
            return mid;
        }
    }
};

// https://leetcode.com/problems/binary-search/
// Constraints: 1 <= nums.length <= 10^4, -10^4 < nums[i], target < 10^4, All the integers in nums are unique., nums is sorted in ascending order.
// Time Complexity: O(log n)
// Auxiliary Space: O(log n)