// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int n = strs.size(), i = 0;
        sort(strs.begin() , strs.end());
        string a = strs[0], b = strs[n - 1], ans = "";
        for(i = 0; i < min(a.size() , b.size()); i++)
            if(a[i] != b[i])    return a.substr(0 , i);
        return a.substr(0 , i);
    }
};