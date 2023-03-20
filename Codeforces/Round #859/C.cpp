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
        string s;
        cin >> s;
        bool flag =  true;
        vector<int> v(26 , -1);
        for(int i = 0; i < n; i++)
        {
            if(v[s[i] - 'a'] != -1)
            {
                if((i - v[s[i] - 'a']) & 1)
                {
                    flag = false;
                    break;
                }
            }
            v[s[i] - 'a'] = i;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}