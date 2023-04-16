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
        int n, sum = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int curr_sum = 0, ans = n, size = 0;
        for(int i = 0; i < n; i++)
        {
            curr_sum += v[i];
            size++;
            int temp_size = 0;
            if(sum % curr_sum == 0)
            {
                temp_size = size;
                int temp_sum = 0, temp_count = 0;
                for(int j = i + 1; j < n; j++)
                {
                    temp_sum += v[j];
                    temp_count++;
                    if(temp_sum == curr_sum)
                    {
                        temp_size = max(temp_size, temp_count);
                        temp_sum = 0;
                        temp_count = 0;
                    }
                }
                if(temp_sum == 0)
                    ans = min(ans, temp_size);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}