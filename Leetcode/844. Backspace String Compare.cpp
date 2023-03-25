// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        string a, b;
        int back = 0;
        for(int i = s.size(); i >= 0; i--)
        {
            if(!back && s[i] != '#')
                a += s[i];
            else if(s[i] == '#')
                back++;
            else
                back--;
        }
        back = 0;
        for(int i = t.size(); i >= 0; i--)
        {
            if(!back && t[i] != '#')
                b += t[i];
            else if(t[i] == '#')
                back++;
            else
                back--;
        }
        return a == b;
    }
};  