class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int num = 0;
        int powerOfTwo = 1;
        
        for(int i = b.length() - 1; i >= 0; i--)
        {
            if(b[i] == '1')
            {
                num += 1 * powerOfTwo;
            }
            
            powerOfTwo *= 2;
        }
        
        return num;
    }
};

// https://www.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1
// Constraints: 1 <= number of bits in binary number <= 16
// Time Complexity: O(log n) (In terms of string length = n, O(n))
// Auxiliary Space: O(1)