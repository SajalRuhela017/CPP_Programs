//JAI SHREE RAM

//Reverse the individual words of a string given
//Time Complexity = O(n)
//Space Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s, c = "", ans = "";
        cin >> s;
        int n = s.length();
        int a = n - 1, b = n - 1;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] != '.')
            {
                c += s[i];
            }
            else
            {
                reverse(c.begin() , c.end());
                ans += c;
                c = "";
                ans += '.';
            }
        }
        reverse(c.begin() , c.end());
        ans += c;
        cout << ans << endl;
    }
    return 0;
}