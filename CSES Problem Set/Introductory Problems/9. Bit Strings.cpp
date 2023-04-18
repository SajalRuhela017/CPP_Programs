#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x = 2;
    cin >> n;
    int ans = 1;
    while(n)
    {
        if(n & 1)
            ans = (ans * x) % mod , n--;
        x = (x * x) % mod , n /= 2;
    }
    cout << ans << '\n';
    return 0;
}