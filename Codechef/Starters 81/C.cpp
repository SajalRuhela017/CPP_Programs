/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, o = 0, z = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] ? o++ : z++;
        }
        if(o == z)
        {
            cout << 0 << "\n";
            continue;
        }
        if(n & 1 || z == n)
        {
            cout << -1 << "\n";
            continue;
        }
        if(n == 2 && o == n)
        {
            cout << -1 << "\n";
            continue;
        }
        int op = 0;
        while(o != z)
        {
            if(o > z)
            {
                o -= 2;
                z += 2;
                op++;
            }
            if(z > o)
            {
                z-- , o++;
                op++;
            }
        }
        cout << op << "\n";
    }
    return 0;
}