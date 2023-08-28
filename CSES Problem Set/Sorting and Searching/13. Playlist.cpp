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
    int n, ans = 0, mx = 0;
    cin >> n;
    vector<int> v;
    unordered_map<int, bool> mp;
    for(int i = 0, j = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if(mp.find(x) == mp.end() || mp[x] == false)
        {
            mp[x] = true;
            ans++;
            mx = max(mx, ans);
        }
        elsez
        {
            while(v[j] != x)
            {
                mp[v[j]] = false;
                j++;
            }
            ans = (i - j);
            j++;
        }
    }
    cout << mx << '\n';
    return 0;
}