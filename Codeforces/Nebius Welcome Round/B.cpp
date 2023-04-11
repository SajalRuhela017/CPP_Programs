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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int when = -1, cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] <= when + d && cnt > 0)
                cnt--;
            else
            {
                when = v[i] + w;
                cnt = k - 1;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}