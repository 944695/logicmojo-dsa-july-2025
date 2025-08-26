class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        int count = 0;
        while(n >= 1)
        {
            if((n & 1) == 1)
            {
                count++;
            }

            n >>= 1;
        }

        if (count == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1
// Constraints: 0 ≤ n < 10^9
// Time Complexity: O(log n)
// Auxiliary Space: O(1)
