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
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++)
        {
            vector<int> temp(n);
            int num = n;
            for(int j = 0; j < n; j++)
            {
                if((num - i - j) > 0)
                    temp[j] = num - i - j;
                else
                    temp[j] = num--;
            }
            v[i] = temp;
        }
        if(n == 3)
            v[1] = {2, 3, 1};
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout << v[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}