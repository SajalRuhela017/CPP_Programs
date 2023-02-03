/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pre(n), suf(n);
        set<char> pref, suff;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            pref.insert(s[i]);
            suff.insert(s[n - i - 1]);
            pre[i] = pref.size();
            suf[n - i - 1] = suff.size();
        }
        for(int i = 0; i < n - 1; i++)
        {
            ans = max(ans , pre[i] + suf[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}