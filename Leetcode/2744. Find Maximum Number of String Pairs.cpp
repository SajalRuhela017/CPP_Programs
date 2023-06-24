// You are given a 0-indexed array words consisting of distinct strings.

// The string words[i] can be paired with the string words[j] if:

// The string words[i] is equal to the reversed string of words[j].
// 0 <= i < j < words.length.
// Return the maximum number of pairs that can be formed from the array words.

// Note that each string can belong in at most one pair.

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words)
    {
        int ans = 0;
        for(int i = 0; i < words.size(); i++)
        {
            if(words[i] != "00")
            {
                for(int j = i + 1; j < words.size(); j++)
                {
                    string s = string(words[j].rbegin(), words[j].rend());
                    if(s == words[i])
                    {
                        words[j] = "00";
                        ans++;
                        break;
                    }
                }   
            }
        }
        return ans;
    }
};