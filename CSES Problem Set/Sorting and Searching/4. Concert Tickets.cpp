#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    while(m--)
    {
        int x;
        cin >> x;
        auto it = ms.upper_bound(x);
        if(it == ms.begin())
        {
            cout << -1 << '\n';
        }
        else
        {
            it = prev(it);
            cout << *it << '\n';
            ms.erase(it);
        }
    }
    return 0;
}