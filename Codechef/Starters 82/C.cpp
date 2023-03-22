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
        int n, a = 1;
        cin >> n;
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++)
        {
            vector<int> temp;
            for(int j = 0; j < n ; j++)
            {
                temp.push_back(a);
                a += 2;
                if(a > n * n)
                    a = 2;
            }
            ans.push_back(temp);
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}