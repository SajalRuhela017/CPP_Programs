// In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

// Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographically in this alien language.

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        vector<int> ind(26);
        for(int i = 0; i < order.size(); i++)
            ind[order[i] - 'a'] = i;
        for (string &w : words)
            for (char &c : w)
                c = ind[c - 'a'];
        return is_sorted(words.begin() , words.end());
    }
};