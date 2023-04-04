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
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        if(d == 0)
            cout << s << "0";
        else
        {
            int i = 0, flag = 1;
            for(i = 0; i < n; i++)
            {
                if(s[i] < (d + '0') && flag)
                {
                    cout << d;
                    flag = 0;
                }
                cout << s[i];
            }
            if(flag)
                cout << d;
        }
        cout << "\n";
    }
    return 0;
}