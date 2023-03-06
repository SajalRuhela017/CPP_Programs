// Given a positive integer num, split it into two non-negative integers num1 and num2 such that:

// The concatenation of num1 and num2 is a permutation of num.
// In other words, the sum of the number of occurrences of each digit in num1 and num2 is equal to the number of occurrences of that digit in num.
// num1 and num2 can contain leading zeros.
// Return the minimum possible sum of num1 and num2.

class Solution {
public:
    int splitNum(int num) 
    {
        string temp = to_string(num);
        sort(temp.begin() , temp.end());
        string a = "", b = "";
        for(int i = 0; i < temp.size(); i+= 2)
        {
            a += temp[i];
            if(i + 1 < temp.size())
                b += temp[i + 1];
        }
        int ans = stoi(a) + stoi(b);
        return ans;
    }
};