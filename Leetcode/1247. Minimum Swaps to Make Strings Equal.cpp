// You are given two strings s1 and s2 of equal length consisting of letters "x" and "y" only. Your task is to make these two strings equal to each other. You can swap any two characters that belong to different strings, which means: swap s1[i] and s2[j].

// Return the minimum number of swaps required to make s1 and s2 equal, or return -1 if it is impossible to do so.

class Solution {
public:
    int minimumSwap(string s1, string s2) 
    {
        int a = 0, b = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] == 'x' && s2[i] == 'y')
                a++;
            else if(s1[i] == 'y' && s2[i] == 'x')
                b++;
        }
        if((a + b) & 1)
            return -1;
        return a / 2 + b / 2 + (a & 1) * 2;
    }
};