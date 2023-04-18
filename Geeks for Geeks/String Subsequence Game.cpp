// Given a string return all unique possible subsequences which start with vowel and end with consonant. A String is a subsequence of a given String, that is generated by deleting some character of a given string without changing its order.

class Solution {
  public:
  
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    void findSubsequence(int i, string s, string temp, set<string> &ans)
    {
        if(i == s.size())
        {
            if(isVowel(temp[0]) && !isVowel(temp.back()))
                ans.insert(temp);
            return;
        }
        findSubsequence(i + 1, s, temp, ans);
        temp += s[i];
        findSubsequence(i + 1, s, temp, ans);
        temp.pop_back();
    }
    
    set<string> allPossibleSubsequences(string S) 
    {
        set<string> ans;
        string temp = "";
        findSubsequence(0, S, temp, ans);
        return ans;
    }
};