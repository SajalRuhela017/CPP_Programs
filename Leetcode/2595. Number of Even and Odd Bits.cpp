// You are given a positive integer n.

// Let even denote the number of even indices in the binary representation of n (0-indexed) with value 1.

// Let odd denote the number of odd indices in the binary representation of n (0-indexed) with value 1.

// Return an integer array answer where answer = [even, odd].

class Solution {
public:
    vector<int> evenOddBit(int n) 
    {
        string temp = "";
        while(n)
        {
            int x = n % 2;
            temp += to_string(x);
            n /= 2;
        }
        vector<int> ans(2);
        for(int i = 0; i < temp.size(); i++)
        {
            if(i & 1)
                ans[1] += (temp[i] - '0');
            else
                ans[0] += (temp[i] - '0');
        }
        return ans;
    }
};