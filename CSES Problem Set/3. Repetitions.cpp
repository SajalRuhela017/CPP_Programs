#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int ans = 1, count = 1;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            count++;
            ans = max(ans, count);
        }
        else
            count = 1;
    }
    cout << ans << '\n';
}
