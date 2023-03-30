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
        char ans = 'B';
        string s;
        for(int i = 0; i < 8; i++)
        {
            cin >> s;
            if(s == "RRRRRRRR")
                ans = 'R';
        }
        cout << ans << "\n";
    }
    return 0;
}