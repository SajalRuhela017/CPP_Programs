/**
 *      author : rhsajal_017 
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = (s[0] == '0' ? -1 : 0);
        for(int i = 1; i < n; i++)
        {
            ans += (s[i] != s[i - 1]);
        }
        cout << max(ans , 0) << endl;
    }
    return 0;
}