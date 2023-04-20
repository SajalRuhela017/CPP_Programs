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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1)
        {
            cout << "Ramos" << '\n';
            continue;
        }
        int z = 0, o = 0;
        for(int i = 0; i < n; i++)
            s[i] == '1' ? o++ : z++;
        int x = min(z, o);
        cout << (x & 1 ? "Zlatan" : "Ramos") << '\n';
    }
    return 0;
}