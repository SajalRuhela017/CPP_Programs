// There are n soldiers standing in a line. Each soldier is assigned a unique rating value.

// You have to form a team of 3 soldiers amongst them under the following rules:

// Choose 3 soldiers with index (i, j, k) with rating (rating[i], rating[j], rating[k]).
// A team is valid if: (rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]) where (0 <= i < j < k < n).
// Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).

class Solution {
public:
    int numTeams(vector<int>& rating)
    {
        int ans = 0, n = rating.size();
        for(int i = 0; i < n; i++)
        {
            int a = 0, b = 0, c = 0, d = 0;
            for(int j = 0; j < n; j++)
            {
                if(j < i)
                    rating[i] > rating[j] ? a++ : b++;
                else if(j > i)
                    rating[j] > rating[i] ? c++ : d++;
            }
            ans += (a * c) + (b * d);
        }
        return ans;
    }
};