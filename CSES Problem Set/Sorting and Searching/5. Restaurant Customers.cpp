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
        vp.push_back(make_pair(x, y));
    }
    sort(vp.begin(), vp.end());
    
    return 0;
}