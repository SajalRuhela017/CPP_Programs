// You are given a 2D integer array ranges where ranges[i] = [starti, endi] denotes that all integers between starti and endi (both inclusive) are contained in the ith range.

// You are to split ranges into two (possibly empty) groups such that:

// Each range belongs to exactly one group.
// Any two overlapping ranges must belong to the same group.
// Two ranges are said to be overlapping if there exists at least one integer that is present in both ranges.

// For example, [1, 3] and [2, 5] are overlapping because 2 and 3 occur in both ranges.
// Return the total number of ways to split ranges into two groups. Since the answer may be very large, return it modulo 109 + 7.

class Solution {
public:
    int solve(int n)
    {
        map<int , int> mp;
        long long mod = 1e9 + 7;
        if(n == 0)
            return 1;
        if(n == 1)
            return 2;
        long long val = solve(n / 2);
        int temp = 0;
        val = (val * val) % mod;
        if(n & 1)
            val = (val * 2) % mod;
        return val % mod;
    }
    
    int countWays(vector<vector<int>>& ranges) 
    {
        vector<vector<int>> temp;
        sort(ranges.begin() , ranges.end());
        priority_queue<int> pq;
        for(int i = 0; i < ranges.size(); i++)
        {
            if(temp.empty() || temp[temp.size() - 1][1] < ranges[i][0])
                temp.push_back(ranges[i]);
            else
                temp[temp.size() - 1][1] = max(temp[temp.size() - 1][1] , ranges[i][1]);
        }
        map<int , int> mp;
        int n = temp.size(), sol = 0;
        int ans = solve(n);
        return ans;
    }
};