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
        int n, k, x;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v[i].first = x % k;
            v[i].second = i + 1;

        }
        sort(v.begin(), v.end());
        int i = 0;
        for(; i < n; i++)
        {
            if(v[i].first == 0)
                cout << v[i].second << ' ';
            else
                break;
        }
        for(int j = n - 1; j >= i; j--)
        {
            int x = 0;
            while(v[j].first == v[j - 1].first && j > 0)
                x++ , j--;
            for(int k = j; k <= j + x; k++)
                cout << v[k].second  << ' ';
        }
        cout << '\n';
    }
    return 0;
}