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
        string s;
        cin >> s;
        bool r = 0, g = 0, b = 0, flag = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'r')
                r = 1;
            else if(s[i] == 'g')
                g = 1;
            else if(s[i] == 'b')
                b = 1;
            else if(s[i] == 'R' && !r)
                flag = 0;
            else if(s[i] == 'G' && !g)
                flag = 0;
            else if(s[i] == 'B' && !b)
                flag = 0;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}