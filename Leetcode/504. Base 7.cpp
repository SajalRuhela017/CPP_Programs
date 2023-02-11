// Given an integer num, return a string of its base 7 representation.

class Solution {
public:
    string convertToBase7(int num) 
    {
        if(num == 0)    return "0";
        string ans = (num < 0 ? "-" : "");
        vector<int> temp;
        num = abs(num);
        while(num)
        {
            temp.push_back(num % 7);
            num /= 7;
        }
        for(int i = temp.size() - 1; i >= 0; i--)
            ans += (temp[i] + '0');
        return ans;    
    }
};