/**            ॐ
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
        long long n, w, wr;
        cin >> n >> w >> wr;
        vector<long long> v(n);
        map<long long , long long> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] == 2)
            {
                wr += 2 * v[i];
                mp[v[i]] = 0;
            }
        }
        cout << (wr >= w ? "YES\n" : "NO\n");
    }
    return 0;
}