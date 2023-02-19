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
    int n, o = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        o += v[i];
        v[i] = (v[i] ? -1 : 1); 
    }
    if(o == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    int ans = 0, x = 0;
    for(int i = 0; i < n; i++)
    {
        x = max(0 , x + v[i]);
        ans = max(ans , x);
    }
    cout << o + ans << endl;
    return 0;
}