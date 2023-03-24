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
        set<char> st;
        for(int i = 0; i < 4; i++)
            st.insert(s[i]);
        int n = st.size();
        if(n >= 3)
            cout << "4\n";
        else if(n == 2)
        {
            sort(s.begin() , s.end());
            if(s[0] == s[1] && s[2] == s[3])
                cout << "4\n";
            else
                cout << "6\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}