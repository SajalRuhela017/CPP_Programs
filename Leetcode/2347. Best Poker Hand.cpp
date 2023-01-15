// You are given an integer array ranks and a character array suits. You have 5 cards where the ith card has a rank of ranks[i] and a suit of suits[i].

// The following are the types of poker hands you can make from best to worst:

// "Flush": Five cards of the same suit.
// "Three of a Kind": Three cards of the same rank.
// "Pair": Two cards of the same rank.
// "High Card": Any single card.
// Return a string representing the best type of poker hand you can make with the given cards.

class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
        unordered_set<int> s(suits.begin() , suits.end());
        if(s.size() == 1)   return "Flush";
        sort(ranks.begin() , ranks.end());
        int mx = 0, count = 1;
        for(int i = 1; i < 5; i++)
        {
            if(ranks[i] == ranks[i - 1])
            {
                count++;
                mx = max(count , mx);
            }
            else
                count = 1;
        }
        if(mx >= 3)  return "Three of a Kind";
        if(mx == 2)  return "Pair";
        return "High Card";
    }
};