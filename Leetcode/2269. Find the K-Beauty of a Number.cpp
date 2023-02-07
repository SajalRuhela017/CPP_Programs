// The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:

// It has a length of k.
// It is a divisor of num.
// Given integers num and k, return the k-beauty of num.

// Note:

// Leading zeros are allowed.
// 0 is not a divisor of any value.
// A substring is a contiguous sequence of characters in a string.

class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string s = to_string(num);
        int ans = 0, n = s.size();
        for(int i = 0; i <= n - k; i++)
        {
            string temp = s.substr(i , k);
            unordered_set<char> st(temp.begin() , temp.end());
            if(st.size() == 1 && temp[0] == '0')    continue; 
            int divi = stoi(temp);
            if(num % divi == 0)     ans++;
        }    
        return ans;
    }
};