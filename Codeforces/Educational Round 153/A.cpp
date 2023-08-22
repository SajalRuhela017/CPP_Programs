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
        string s, a, b;
        cin >> s;
        int n = s.size();
        for(int i = 0; i < 2 * n; i++)
        {
            a += (i < n ? '(' : ')');
            b += (i & 1 ? ')' : '(');
        }
        if(a.find(s) == string::npos)
            cout << "YES" << '\n' << a << '\n';
        else if(b.find(s) == string::npos)
            cout << "YES" << '\n' << b << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}