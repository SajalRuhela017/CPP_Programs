#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << '\n';
    return 0;
}