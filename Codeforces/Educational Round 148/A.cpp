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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        string str;
        cin >> str;
        vector<int> freq(26);
        int count = 0;
        for(int i = 0; i < str.size(); i++)
            freq[str[i] - 'a']++;
        for(int i = 0; i < 26; i++)
            count += (freq[i] > 1);
        cout << (count > 1 ? "YES" : "NO") << '\n';
    }
    return 0;
}