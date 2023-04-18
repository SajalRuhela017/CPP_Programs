#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int x = n;
    vector<int> v(n - 1);
    for(int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
        x ^= v[i];
        x ^= (i + 1);
    }
    cout << x << '\n';
}
