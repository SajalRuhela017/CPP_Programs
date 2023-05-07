/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int N = 1e6+7;

int v[N + 1];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 1;i <= N; i++)
        v[i] = i;
 
    for(int i = 2; i <= N; i += 2)
            v[i] = 2;
    
    for(int i = 3; i * i <= N; i++)
    {
        if(v[i] == i)
        {
            for(int j = i * i; j <= N; j += i)
            {
                if(v[j] == j)
                    v[j] = i;
            }
        }
    }
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m;
        cin >> n >> m;
        cout << ((v[n] > m || n == 1) ? "YES" : "NO") << '\n';
    }
    return 0;
}