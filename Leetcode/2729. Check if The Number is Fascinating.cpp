// You are given an integer n that consists of exactly 3 digits.

// We call the number n fascinating if, after the following modification, the resulting number contains all the digits from 1 to 9 exactly once and does not contain any 0's:

// Concatenate n with the numbers 2 * n and 3 * n.
// Return true if n is fascinating, or false otherwise.

// Concatenating two numbers means joining them together. For example, the concatenation of 121 and 371 is 121371.

class Solution {
public:
    bool isFascinating(int n)
    {
        string temp = to_string(n);
        n *= 2;
        temp += to_string(n);
        n /= 2;
        n *= 3;
        temp += to_string(n);
        vector<int> f(10);
        for(int i = 0; i < temp.size(); i++)
        {
            f[temp[i] - '0']++;
            if(f[temp[i] - '0'] > 1 || temp[i] == '0')
                return false;
        }
        return true;
    }
};