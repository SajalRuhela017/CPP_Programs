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
        long long n, ans = INT_MAX;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin() , v.end());
        for(int i = 1; i < n - 1; i++)
        {
            int j = i - 1, k = i + 1;
            while(j >= 0 && k < n)
            {
                ans = min(ans , abs(v[j]+ v[k] - 2 * v[i]));
                if((v[i] - v[j]) < (v[k] - v[i]))
                    j--;
                else
                    k++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}