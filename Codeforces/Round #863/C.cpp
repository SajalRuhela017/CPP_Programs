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
        int n;
        cin >> n;
        vector<int> v(n - 1), ans(n), temp(n - 1);
        map<int, int> mp;
        for(int i = 0, j = 0; i < n - 1; i++)
        {
            cin >> v[i];
            mp[v[i]] = i;
            temp[i] = v[i];
        }
        ans[0] = v[0];
        ans[n - 1] = v[n - 2];
        unordered_set<int> s;
        sort(temp.begin(), temp.end());
        for(int i = 0; i < n - 2; i++)
        {
            ans[i + 1] = min(v[i], v[i + 1]);
            s.insert(ans[i + 1]);
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << '\n';
        s.clear();
    }
    return 0;
}