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
        int n, cost = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<bool> notVisited(n, true);
        for(int i = 1; i <= n; i++)
        {
            for(int j = i - 1; j < n; j += i)
            {
                if(s[j] == '1')
                    break;
                if(notVisited[j])
                {
                    notVisited[j] = false;
                    cost += i;
                }                
            }
        }
        cout << cost << '\n';
    }
    return 0;
}