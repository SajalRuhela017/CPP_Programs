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
        int n, ind = 0;
        cin >> n;
        string s;
        cin >> s;
        char c = s[0];
        for(int i = 1; i < n; i++)
        {
            if(s[i] <= c)
            {
                c = s[i];
                ind = i;
            }
        }
        cout << c;
        for(int i = 0; i < n; i++)
        {
            if(i != ind)
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}