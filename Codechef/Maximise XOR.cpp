/**             ? 
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int z = 0, o = 0;
        for(int i = 0; i < a.size(); i++)
        {
            a[i] == '1' ? o++ : z++;
            b[i] == '1' ? o++ : z++;
        }
        for(int i = 0; i < a.size(); i++)
            cout << (i < min(o , z) ? '1' : '0');
        cout << "\n";
    }
    return 0;
}