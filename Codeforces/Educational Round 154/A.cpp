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
        string s;
        cin >> s;
        int o = -1, t = -1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                o = i;
            if(s[i] == '3')
                t = i;
        }
        if(t < o)
            cout << "31" << '\n';
        else
            cout << "13" << '\n';
    }
    return 0;
}