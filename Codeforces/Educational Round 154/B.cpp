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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        if(a == b)
        {
            cout << "YES" << '\n';
            continue;
        }
        if(a[0] != b[0] || a[n - 1] != b[n - 1])
        {
            cout << "NO" << '\n';
            continue;
        }
        bool flag = false;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}