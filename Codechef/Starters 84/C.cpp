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
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(n == 2)
        {
            cout << "No\n";
            continue;
        }
        sort(v.begin(), v.end());
        int sum = v[n - 1] + v[n - 2];
        vector<int> temp(n);
        for(int i = n - 1, j = n - 1; i >= 0; i -= 2, j--)
            temp[i] = v[j];
        for(int i = n - 2, j = 0; i >= 0; i -= 2, j++)
            temp[i] = v[j];
        bool flag = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(temp[i] + temp[i + 1] >= sum)
            {
                flag = false;
                break;
            }
        }
        cout << (!flag ? "No" : "Yes") << "\n";
    }
    return 0;
}