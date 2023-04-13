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
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i].first;
        for(int i = 0; i < n; i++)
            cin >> a[i].second;
        vector<pair<int, int>> ans;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[j] > a[i])
                {
                    swap(a[i], a[j]);
                    ans.push_back(make_pair(i, j));
                }
            }
        }
        int flag = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i].first <= a[i + 1].first && a[i].second <= a[i + 1].second)
                flag++;
        }
        if(flag == n - 1)
        {
            cout << ans.size() << '\n';
            for(auto &it: ans)
                cout << it.first + 1 << ' ' << it.second + 1 << '\n';
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}