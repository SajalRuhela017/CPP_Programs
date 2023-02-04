// Given a positive integer num, return true if num is a perfect square or false otherwise.

// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

// You must not use any built-in library function, such as sqrt.

class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long i = 1, j = num;
		while(i <= j)
        {
			long long mid = (j + i) / 2;
			if(num % mid == 0 && mid * mid == num)
                return true;
			else if(mid < num / mid)
                i = mid + 1;
			else
                j = mid - 1;
		}
		return false;
    }
};