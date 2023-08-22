/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int N = 8e5 + 6;
vector<int> b(N);
int a[N], m;

void func(int x, int y = -1)
{
    if(x != 1 && b[x].size() == 1)
        a[x] = 1;
    for(auto i: b[x])
    {
        if(i != y)
        {
            func(i, x);
            a[x] = a[x] + a[i];
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, l, r;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            a[i] = 0;
            b[i].clear();
        }
        for(int i = 1; i < n; i++)
        {
            cin >> l >> r;
            b[r].push_back(l);
            b[l].push_back(r);
        }
        func(1);
        cin >> m;
        while(m--)
        {
            cin >> l >> r;
            cout << a[r] * a[l] << '\n';
        }
    }
    return 0;
}