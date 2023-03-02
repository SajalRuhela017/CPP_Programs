/**             ॐ
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
        string s, temp = "", check = "meow";
        cin >> s;
        transform(s.begin() , s.end() , s.begin() , ::tolower);
        // cout << s << endl;
        temp += s[0];
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1])
                temp += s[i];
        }
        cout << (temp == check ? "YES" : "NO") << endl;
    }
    return 0;
}