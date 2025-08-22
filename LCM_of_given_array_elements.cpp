class Solution {
  public:
    int lcmOfArray(int N, int A[]) {
		long n = A[0];

		for (int i = 1; i < N; i++)
		{
			n = calc_lcm(n, A[i]) % 1000000007;
		}

		return n;
	}
	
	long calc_lcm(long a,long b)
	{
	    return (long) a * b / gcd(a,b);
	}
	
	long gcd(long a, long b) {

		int min;
        
        if(a < b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
        
        if(b == 0)
        {
            return a;
        }
        else
        {
            return gcd(b, a % b);
        }
    }
};

// https://www.geeksforgeeks.org/problems/lcm-of-given-array-elements3919/1
// Constraints: 1 <= N <= 105, 1 <= A[i] <= 105
// Expected Time Complexity: O(N*log(N))
// Expected Auxiliary Space: O(1)