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
        vector<int> v(n);
        map<int , vector<int>> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        int ans = 0;
        for(int i = 1, j = 0; i < n; i++)
        {
            if(v[i] < v[i - 1])
            {
                while(j < i)
                {
                    if(v[j])
                    {
                        for(auto &it: mp[v[j]])
                            v[it] = 0;
                        ans++;
                    }
                    j++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}