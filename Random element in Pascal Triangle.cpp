/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int nCr(int n, int r)
{
    int ans = 1;
    for(int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    if(c > r)
        cout << "-1";
    else if(r == c)
        cout << "1";
    else
        cout << nCr(--r, --c);
    cout << "\n";
    return 0;
}