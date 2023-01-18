// You are given a 0-indexed circular string array words and a string target. A circular array means that the array's end connects to the array's beginning.

// Formally, the next element of words[i] is words[(i + 1) % n] and the previous element of words[i] is words[(i - 1 + n) % n], where n is the length of words.
// Starting from startIndex, you can move to either the next word or the previous word with 1 step at a time.

// Return the shortest distance needed to reach the string target. If the string target does not exist in words, return -1.

class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) 
    {
        if(find(words.begin() , words.end() , target) == words.end())   return -1;
        int forward = 0, backward = 0, n = words.size();
        for(int i = startIndex; ; i++)
            if(words[i % n] == target)
            {
                forward = i - startIndex;
                break;
            }
        for(int i = startIndex; ; i--)
            if(words[(i + n) % n] == target)
            {
                backward = (startIndex - i + n) % n; 
                break;
            }
        return min(forward , backward);
    }
};