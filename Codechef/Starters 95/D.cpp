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
    int n, k = 1;
    cin >> n;
    vector<string> temp;
    temp.push_back("00");
    string ans = "";
    map<string, int> mp;
    while(n--)
    {
        string s;
        cin >> s;
        if(mp.find(s) != mp.end())
            temp[mp[s]] = "00";
        temp.push_back(s);
        mp[s] = k++;
    }
    int size = temp.size();
    for(int i = size - 1; i >= 1; i--)
    {
        if(temp[i] != "00")
        {
            int x = temp[i].size();
            ans += temp[i][x - 2];
            ans += temp[i][x - 1];
        }
    }
    cout << ans << '\n';
    return 0;
}