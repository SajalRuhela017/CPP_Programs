#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0, x = 5;
    cin >> n;
    while(x <= n)
    {
        ans += (n / x);
        x *= 5;
    }
    cout << ans << '\n';
    return 0;
}