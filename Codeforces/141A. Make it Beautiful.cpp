/**             ॐ 
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, i, j, sm, la, m, c;
        cin>>n;
        m = n * n;
        sm = 1;
        la = m;
        long long ans[n + 1][n + 1];
        c = 1;
        for(int i = 1; i <= n; i++)
        {
            if((i % 2) == 1)
            {
                for(int j = 1; j <= n; j++)
                {
                    if((c % 2) == 1)
                        ans[i][j] = sm++;
                    else
                        ans[i][j] = la--;
                    c++;
                }
            }
            else
            {
                for(int j = n; j >= 1; j--)
                {
                    if((c % 2) == 1)
                        ans[i][j] = sm++;
                    else
                        ans[i][j] = la--;
                    c++;
                }
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}