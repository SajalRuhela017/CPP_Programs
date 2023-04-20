#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x; 
    vector<int> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    int i = 0, j = n - 1, ans = 0;
    while(i <= j)
    {
        if(p[i] + p[j] <= x)
        {
            ans++;
            i++ , j--;
        }
        else
        {
            ans++;
            j--;
        }
    }
    cout << ans << '\n';
    return 0;
}