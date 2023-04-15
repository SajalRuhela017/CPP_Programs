// Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

class Solution {
public:
    bool static comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];    
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end(), comp);
        int ans = 0, last = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] < last)
                ans++;
            else
                last = intervals[i][1];
        }
        return ans;
    }
};