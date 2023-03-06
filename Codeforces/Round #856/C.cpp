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
        vector<long long> v(n), ans;
        for(int i = 0; i < n; i++)
            cin >> v[i];
        for(int i = 0; i < n; i++)
        {
            int s = 1, e = i + 1;
            while(s <= e)
            {
                int m = (s + e) / 2;
                if(v[i - m + 1] >= m)
                    s = m + 1;
                else
                    e = m - 1;
            }
            ans.push_back(e);
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}