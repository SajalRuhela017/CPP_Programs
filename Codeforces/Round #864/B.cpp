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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v(n, vector<int>(n)), temp(n, vector<int>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        int op = 0;
        map<int, int> one;
        vector<int> zero;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                op += (v[i][j] != v[n - i - 1][n - j - 1]);
            }
        }
        op /= 2;
        if(op > k)
            cout << "No\n";
        else
        {
            k -= op;
            if(n & 1 || !(k & 1))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}