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
        int n, m;
        cin >> n >> m;
        vector<int> v(n), u(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            u[i] = -v[i];
        }
        sort(v.begin(), v.end());
        vector<vector<int>> p;
        priority_queue<int> pq;
        sort(u.rbegin(), u.rend());
        for(int i = 1; i <= m; i++)
        {
            int a, b, c, root1 = -1, root2 = -1;
            cin >> a >> b >> c;
            p.push_back(vector<int>{a, b, c});
            if(c < 0)
                cout << "No\n";
            else
            {
                int s = 0, e = n - 1;
                while(s <= e)
                {
                    int m = (s + e) >> 1;
                    if(b - 2 * sqrt(a * c) < v[m])
                        e = m - 1;
                    else
                        s = m + 1;
                }
                if(s < n && b - 2 * sqrt(a * c) < v[s] && v[s] < 2 * sqrt(a * c) + b)
                    cout << "Yes\n" << v[s] << "\n";
                else
                    cout << "No\n";
            }
        }
        u.clear();
    }
    return 0;
}