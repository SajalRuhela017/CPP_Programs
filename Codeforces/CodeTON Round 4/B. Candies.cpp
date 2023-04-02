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
        if(n & 1)
        {
            vector<int> ans;
            while (n > 1) 
            {
                if (((n - 1) / 2) & 1) 
                {
                    n = (n - 1) / 2;
                    ans.push_back(2);
                }
                else 
                {
                    n = (n + 1) / 2;
                    ans.push_back(1);
                }
            }
            cout << ans.size() << "\n";
            for(int i = ans.size() - 1; i >= 0; i--)
                cout << ans[i] << " ";
            cout << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}