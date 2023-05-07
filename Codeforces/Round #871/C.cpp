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
        int n, ans = -1;
        cin >> n;
        vector<int> a, b, c;
        for(int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;
            if(s[0] == '1' && s[1] == '1')
                c.push_back(x);
            else if(s[0] == '1')
                a.push_back(x);
            else if(s[1] == '1')
                b.push_back(x);
        }
        if(a.size() == 0 || b.size() == 0)
        {
            if(c.size() == 0)
                cout << -1 << '\n';
            else
            {
                sort(c.begin(), c.end());
                cout << c[0] << '\n';
            }
        }
        else
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if(c.size() >= 1)
            {
                sort(c.begin(), c.end());
                cout << min(c[0], a[0] + b[0]) << '\n';
            }
            else
            {
                cout << a[0] + b[0] << '\n';
            }
        }
    }
    return 0;
}