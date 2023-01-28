// You are given an integer array deck where deck[i] represents the number written on the ith card.

// Partition the cards into one or more groups such that:

// Each group has exactly x cards where x > 1, and
// All the cards in one group have the same integer written on them.
// Return true if such partition is possible, or false otherwise.

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int , int> mp;
        for(int i = 0; i < deck.size(); i++)
            mp[deck[i]]++;
        int val = 0;
        for(auto i : mp)
            val = __gcd(val , i.second);
        return val > 1;
    }
};