// You are given a binary string s consisting only of zeroes and ones.

// A substring of s is considered balanced if all zeroes are before ones and the number of zeroes is equal to the number of ones inside the substring. Notice that the empty substring is considered a balanced substring.

// Return the length of the longest balanced substring of s.

// A substring is a contiguous sequence of characters within a string.

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) 
    {
        int ans = 0, i = 0, j = -1, count0 = 0, count1 = 0;
        while(i < s.size())
        {
            if(s[i] == '0')
            {
                if(i > 1 && s[i - 1] == '1')
                    count0 = 0;
                count0++;
                if(j == -1)
                    j = i;
                count1 = 0;
            }
            else
            {
                count1++;
                int check = 2 * min(count1, count0);
                ans = max(ans , check);
            }
            i++;
        }
        return ans;
    }
};