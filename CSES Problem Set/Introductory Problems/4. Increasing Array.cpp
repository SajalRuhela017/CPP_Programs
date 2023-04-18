#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    cin >> v[0];
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < v[i - 1])
        {
            ans += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }        
    }
    cout << ans << '\n';
}
