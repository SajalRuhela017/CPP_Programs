// Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.

// A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.

// Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string> words, string p) 
    {
        vector<string> res;
        for (string w : words) 
            if (F(w) == F(p)) res.push_back(w);
        return res;
    }

    string F(string w) 
    {
        unordered_map<char, int> m;
        for (char c : w) 
            if (!m.count(c))    m[c] = m.size();
        for (int i = 0; i < w.length(); ++i) 
            w[i] = 'a' + m[w[i]];
        return w;
    }
};