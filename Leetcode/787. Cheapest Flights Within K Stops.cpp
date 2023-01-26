// There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei.

// You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1.

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& a, int src, int sink, int k) 
    {        
        vector<int> c(n, 1e8);
        c[src] = 0;        
        for(int z = 0; z <= k; z++)
        {
            vector<int> C(c);
            for(auto e : a)
                C[e[1]] = min(C[e[1]], c[e[0]] + e[2]);
            c = C;
        }
        return c[sink] == 1e8 ? -1 : c[sink];
    }
};