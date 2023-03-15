// There are n flights that are labeled from 1 to n.

// You are given an array of flight bookings bookings, where bookings[i] = [firsti, lasti, seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi seats reserved for each flight in the range.

// Return an array answer of length n, where answer[i] is the total number of seats reserved for flight i.

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        vector<int> ans(n , 0);
        for(int j = 0; j < bookings.size(); j++)
        {
            ans[bookings[j][0] - 1] += bookings[j][2];
            if(bookings[j][1] < n)
                ans[bookings[j][1]] -= bookings[j][2];
        }
        for(int i = 1; i < n; i++)
            ans[i] += ans[i - 1];
        return ans;
    }
};