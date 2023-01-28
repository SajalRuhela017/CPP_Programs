// Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.

// An alphanumeric string is a string consisting of lowercase English letters and digits.

class Solution {
public:
    int secondHighest(string s) 
    {
        string temp = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')  temp += s[i];
        }   
        sort(temp.rbegin(), temp.rend());
        for(int i = 1; i < temp.length(); i++)
        {
            if(temp[i] < temp[0])     return temp[i] - '0';
        }
        return -1;
    }
};