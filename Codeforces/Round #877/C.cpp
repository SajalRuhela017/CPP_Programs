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
        int n, m;
        cin >> n >> m;
        int val = 2 * m + 1;
        map<int, int> mp;
        while(val <= n * m)
        {
            for(int i = 0; i < m; i++)
            {
                cout << val << ' ';
                mp[val]++;
                val++;
            }
            cout << '\n';
            val = val + m;
            mp[val]++;
        }
        val = 1;
        mp[1]++;
        for(int i = 1; i <= m; i++)
        {
            cout << val << ' ';
            mp[val]++;
            val++;
        }
        cout << '\n';
        val = 3 * m + 1;
        mp[3 * m + 1]++;
        for(int i = 0; i < m; i++)
        {
            cout << val << ' ';
            mp[val]++;
            val++;
        }
        cout << '\n';
        val = m + 1;
        mp[m + 1]++;
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> temp;
        while(val <= n * m)
        {
            if(val <= 3 * m)
            {
                for(int i = 0; i < m; i++)
                {
                    cout << val << ' ';
                    mp[val]++;
                    val++;
                }
                cout << '\n';
                val = val + m;
                mp[val]++;
            }
            else
            {
                val += 2 * m;
                mp[val]--;
                continue;
            }
        }
        cout << '\n';
    }
    return 0;
}