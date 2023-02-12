/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long x , y;
        cin >> x >> y;
        long long size = 2 * (x - y);
        cout << size << endl;
        vector<long long> ans;
        map<long long , long long> mp;
        priority_queue<long long> pq;
        for(long long i = y + 1; i <= x; i++)
            ans.push_back(i);
        for(long long i = x - 1; i >= y; i--)
            ans.push_back(i);
        for(auto& i : ans)
            cout << i << " ";
        ans.clear();
        cout << endl;
    }
    return 0;
}