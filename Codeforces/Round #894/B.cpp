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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i = 1; i < n; i++)
        {
            if(v[i] < ans.back())
                ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
        cout << ans.size() << '\n';
        for(auto i: ans)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}