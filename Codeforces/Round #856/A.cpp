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
        vector<string> v;
        for(int i = 0; i < 2 * n - 2; i++)
        {
            string s;
            cin >> s;
            if(s.size() == n - 1)
                v.push_back(s);
        }
        reverse(v[0].begin() , v[0].end());
        cout << (v[0] == v[1] ? "YES" : "NO") << endl;
    }
    return 0;
}