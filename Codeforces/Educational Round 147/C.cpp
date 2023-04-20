/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        unordered_set<char> st(s.begin(), s.end());
        priority_queue<int> pq;
        if(st.size() == n)
        {
            cout << (int)log2(n) << '\n';
        }
        else if(st.size() == 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            int mn = INT_MAX;
            map<char, int> mp;
            vector<int> freq(26, 0);
            for(int i = 0; i <= 25; i++)
            {
                int a = 0, b = 0;
                while(a < n)
                {
                    while(a < n && s[a] == i + 'a')
                        a++;
                    freq[i] = a;
                    int c = a;
                    while(c < n && s[c] != i + 'a')
                        c++;
                    freq[i] = max(freq[i], c);
                    b = max(b, c - a);
                    a = c;
                }
                mn = min(mn, b);
                freq[i] = min(mn, freq[i]);
                freq[i]--;
            }
            if(!mn)
            {
                cout << mn << '\n';
                continue;
            }
            int x = ceil(log2(mn));
            if(!(mn & (mn - 1)))
                cout << x + 1 << '\n';
            else
                cout << x << '\n';
                
            
        }
    }
    return 0;
}