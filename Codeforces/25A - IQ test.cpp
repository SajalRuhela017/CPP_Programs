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
    int n;
    cin >> n;
    vector<int> o, e;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x & 1)
            o.push_back(i + 1);
        else
            e.push_back(i + 1);
    }
    if(e.size() == 1)
        cout << e[0] << '\n';
    else
        cout << o[0] << '\n';
    return 0;
}