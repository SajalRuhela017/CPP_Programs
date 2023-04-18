#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n != 1)
    {
        cout << n << ' ';
        if(n & 1)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    cout << 1 << '\n';
    return 0;
}