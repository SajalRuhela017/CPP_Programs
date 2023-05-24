/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

bool isPalin(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        set<int> st(s.begin(), s.end());
        for(int i = 0; i < n; i++)
            freq[s[i] - 'a']++;

        int odd = 0;
        for(int i = 0; i < 26; i++)
            odd += (freq[i] & 1);

        if(n & 1)
        {
            if(odd > 1)
                cout << 0 << '\n';
            else if(st.size() == 1)
                cout << 2 << '\n';
            else
                cout << 1 << '\n';
        }
        else
        {
            if(odd)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }
    }
    return 0;
}