/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        unordered_set<int> dishes;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            dishes.insert(a[i]);
        }
        for(int i = 0; i < n; i++)
            cin >> b[i];
        if(dishes.size() < k)
        {
            cout << "-1\n";
            continue;
        }
        int m = dishes.size();
        vector<int> possible(m);
        unordered_map<int , int> mp;
        for(int i = 0; i < n; i++)
        {
            if(mp.find(a[i]) != mp.end())
                mp[a[i]] = min(mp[a[i]] , b[i]);
            else
                mp[a[i]] = b[i];
        }
        int j = 0;
        for(auto &i: mp)
            possible[j++] = i.second;
        sort(possible.begin() , possible.end());
        for(int i = 0; i < k; i++)
            ans += possible[i];
        cout << ans << "\n";
    }
    return 0;
}