#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    vector<char> ans(s.size());
    char c = '\0';
    int j = 0, n = s.size(), odd = 0;
    for(int i = 0; i < n; i++)
    {
        freq[s[i] - 'A']++;
        if(freq[s[i] - 'A'] == 2)
        {
            freq[s[i] - 'A'] = 0;
            ans[j] = s[i];
            ans[n - j - 1] = s[i];
            j++;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] & 1)
            c = i + 'A' , odd++;
    }
    if(odd > 1)
    {
        cout << "NO SOLUTION" << '\n';
    }
    else
    {
        if(odd)
            ans[j] = c;
        for(auto &i: ans)
            cout << i;
        cout << '\n';
    }
    return 0;
}