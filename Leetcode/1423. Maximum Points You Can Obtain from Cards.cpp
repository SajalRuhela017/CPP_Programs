// There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.

// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.

// Your score is the sum of the points of the cards you have taken.

// Given the integer array cardPoints and the integer k, return the maximum score you can obtain.

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int sum = accumulate(cardPoints.begin() , cardPoints.end() , 0), ans = 0, curr_sum = 0, n = cardPoints.size();
        for(int i = 0; i < n - k; i++)
            curr_sum += cardPoints[i];
        ans = max(ans , sum - curr_sum);
        for(int i = n - k; i < n; i++)
        {
            curr_sum = curr_sum + cardPoints[i] - cardPoints[i - n + k];
            ans = max(ans , sum - curr_sum);
        }
        return ans;
    }
};