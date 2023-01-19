// Given an array of points on the X-Y plane points where points[i] = [xi, yi], return the area of the largest triangle that can be formed by any three different points. Answers within 10-5 of the actual answer will be accepted.

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double ans = 0;
        for(auto i : points)
            for(auto j : points)
                for(auto k : points)
                    ans = max(ans , 0.5 * (i[0] * j[1] + j[0] * k[1] + k[0] * i[1] - i[0] * k[1] - k[0] * j[1] - j[0] * i[1]));
        return ans;
    }
};