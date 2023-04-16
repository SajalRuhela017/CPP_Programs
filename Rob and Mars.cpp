//Rob has gone to Mars to collect some stones. The bag he is carrying can hold a maximum weight of M. There are M stones weighing from 1 to M on Mars. There are N stones on Mars that are similar to the ones on Earth. Find the numner of stones he can bring from Mars such that none of them are similar to any stone on Earth.

//INPUT FORMAT
//m, denoting the size of the bag and number of differnet stones present on Mars
//n, denoting number of similar stones on Earth and Mars
//array of size n, weights of similar stones

//OUTPUT FORMAT
//maximum unique stones that can be collected from mars

//Example 1
//INPUT: m = 10, n = 3, arr = 1, 3, 5
//OUTPUT: 2

//Example 2
//INPUT: m = 14, n = 4, arr = 4, 6, 8, 9
//OUTPUT: 4

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
    int m, n;
    cin >> m >> n;
    vector<int> v(n), a;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 1, j = 0; i <= m; i++)
    {
        if(i != v[j])
            a.push_back(i);
        else
            j++;
    }
    int ans = 0, sum = 0;
    for(int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if(sum <= m)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}