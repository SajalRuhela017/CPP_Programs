// You are given a 0-indexed array of strings words and a 2D array of integers queries.

// Each query queries[i] = [li, ri] asks us to find the number of strings present in the range li to ri (both inclusive) of words that start and end with a vowel.

// Return an array ans of size queries.length, where ans[i] is the answer to the ith query.

// Note that the vowel letters are 'a', 'e', 'i', 'o', and 'u'.

class Solution {
public:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        int n = words.size();
        vector<int> valid(n);
        for(int i = 0; i < n; i++)
        {
            int m = words[i].size();
            if(isVowel(words[i][0]) && isVowel(words[i][m - 1]))
                valid[i] = 1;
            else
                valid[i] = 0;
        }
        vector<int> ans, prefix(n , 0);
        if(valid[0])    prefix[0] = 1;
        for(int i = 1; i < n; i++)
        {
            prefix[i] = valid[i] + prefix[i - 1];
        }
        for(int i = 0; i < queries.size(); i++)
        {
            if(queries[i][0] == queries[i][1])
            {
                ans.push_back(valid[queries[i][1]]);
            }
            else if(queries[i][0] == 0)
            {
                ans.push_back(prefix[queries[i][1]] - prefix[queries[i][0]] + prefix[0]);
            }
            else
            {
                ans.push_back(prefix[queries[i][1]] - prefix[queries[i][0] - 1]);
            }
        }
        return ans;
    }
};