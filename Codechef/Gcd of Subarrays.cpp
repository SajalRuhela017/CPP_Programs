/**             ? 
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
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
        vector<int> v(n);
        if(k < n * (n + 1) / 2)
            cout << "-1\n";
        else
        {
            for(int i = 0; i < n - 1; i++)
                cout << "1 ";
            cout << k - (n * (n + 1) / 2) + 1 << "\n";
        }
    }
    return 0;
}