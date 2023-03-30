/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool cmp(pair<int , int> &a, pair<int , int> &b)
{
    return a.second < b.second;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, ans = -1;
        cin >> n;
        vector<int> v(n);
        map<int , int> mp;
        vector<pair<int , int>> vp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = i + 1;
        }
        for(auto &it: mp)
            vp.push_back(make_pair(it.first , it.second));
        sort(vp.begin(), vp.end(), cmp);
        for(int i = vp.size() - 1; i >= 0; i--)
        {
            for(int j = i; j >= 0; j--)
            {
                if(vp[i].second + vp[j].second < ans)
                    break;
                else if(__gcd(vp[i].first , vp[j].first) == 1)
                    ans = vp[i].second + vp[j].second;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}