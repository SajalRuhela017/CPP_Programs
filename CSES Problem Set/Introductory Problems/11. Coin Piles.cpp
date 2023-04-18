#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int x = a + b;
        if(a < b)
            swap(a, b);
        cout << (x % 3 == 0 && a <= 2 * b ? "YES" : "NO") << '\n';
    }
    return 0;
}