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
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<pair<int, int>> r(n);
        for(int i = 0; i < n; i++)
        {
            cin >> r[i].first;
            r[i].second = i;
        }
        sort(r.rbegin(), r.rend());
        vector<int> a, b;
        int x = s1, y = s2;
        for(int i = 0; i < n; i++)
        {
            if(x < y)
            {
                a.push_back(r[i].second + 1);
                x += s1;
            }
            else
            {
                b.push_back(r[i].second + 1);
                y += s2;
            }
        }
        cout << a.size() << " ";
        for(auto i: a)
            cout << i << " ";
        cout << '\n';
        cout << b.size() << " ";
        for(auto i: b)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}