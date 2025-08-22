class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int get;
        int set;
        int clear;
    
        get = (num >> (i - 1)) & 1;
        set = num | (1 << (i - 1));
        clear = num & ~(1 << (i - 1));
        
        cout << get << " " << set << " " << clear;
        
    }
};

// https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1?selectedLang=c
// Constraints: 0 <= num <= 10^9, 1 <= i <= 32
// Time Complexity: O(1)
// Auxiliary Space: O(1)