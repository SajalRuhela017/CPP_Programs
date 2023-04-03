// A string s is called happy if it satisfies the following conditions:

// s only contains the letters 'a', 'b', and 'c'.
// s does not contain any of "aaa", "bbb", or "ccc" as a substring.
// s contains at most a occurrences of the letter 'a'.
// s contains at most b occurrences of the letter 'b'.
// s contains at most c occurrences of the letter 'c'.
// Given three integers a, b, and c, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string "".

// A substring is a contiguous sequence of characters within a string.

class Solution {
public:
    string longestDiverseString(int a, int b, int c) 
    {
        priority_queue<pair<int, char>> pq;
        if(a)
            pq.push({a, 'a'});
        if(b)
            pq.push({b, 'b'});
        if(c)
            pq.push({c, 'c'});
        string ans = "";
        while(pq.size() > 1)
        {
            pair<int,char>one = pq.top();
            pq.pop();
            pair<int,char>two = pq.top();
            pq.pop();
            if(one.first >= 2)
            {
                ans += one.second;
                ans += one.second;
                one.first -= 2;
            }
            else
            {
                ans += one.second;
                one.first -= 1;
            }
            if(two.first >= 2 && two.first >= one.first)
            {
                ans += two.second;
                ans += two.second;
                two.first -= 2;
            }
            else
            {
                ans += two.second;
                two.first -= 1;
            }
            if(one.first)
                pq.push(one);
            if(two.first)
                pq.push(two);
        }
        if(pq.empty())
            return ans;
        if(pq.top().first >= 2)
        {
            ans += pq.top().second;
            ans += pq.top().second;
        }
        else
            ans += pq.top().second;
        return ans;
    }
};