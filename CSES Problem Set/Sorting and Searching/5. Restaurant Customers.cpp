#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back(make_pair(x, 1));
        vp.push_back(make_pair(y, 0));
    }
    sort(vp.begin(), vp.end());
    int count = 0, ans = 0;
    for(int i = 0; i < vp.size(); i++)
    {
        count += (vp[i].second ? 1 : -1);
        ans = max(ans, count);
    }
    cout << ans << '\n';
    return 0;
}