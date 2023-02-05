// You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

// Choose the pile with the maximum number of gifts.
// If there is more than one pile with the maximum number of gifts, choose any.
// Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
// Return the number of gifts remaining after k seconds.

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        priority_queue<long long> pq;
        for(int i = 0; i < gifts.size(); i++)
        {
            pq.push(gifts[i]);
        }
        while(k--)
        {
            long long x = pq.top();
            pq.pop();
            long long y = sqrt(x);
            pq.push(y);
        }
        long long sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};