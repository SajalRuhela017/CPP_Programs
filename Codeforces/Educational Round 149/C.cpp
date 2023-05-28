/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

string solve(string& s) 
{
    string ans, temp = "";
    char last_char = '\0';
    for(char c : s)
    {
        if(c == '0' || c == '1')
        {
            ans += c;
            last_char = c;
        }
        else if(c == '?')
        {
            if (last_char == '1')
                ans += '1';
            else
                ans += '0';
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        string s;
        cin >> s;
        int last_one = -1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                last_one = i;
                break;
            }
        }
        if(last_one != -1)
        {
            int i = s.size() - 1;
            while(s[i] == '?')
                s[i--] == '1';
        }        
        cout << solve(s) << '\n';

    }
    return 0;
}