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
        int n, z = 0, o = 1;
        cin >> n;
        string x;
        cin >> x;
        char f = '1', s = '0';
        for(int i = 1; i < n; i++)
        {
            if(f != x[i - 1])
            {
                f= '1';
                o++;
            }
            else
                f = '0';
        }
        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if(s != x[i - 1])
            {
                s = '1';
                z++;
            }
            else
                s = '0';
        }
        if(z > o && flag)
            cout << z << "\n";
        else
            cout << o << "\n";
    }
    return 0;
}