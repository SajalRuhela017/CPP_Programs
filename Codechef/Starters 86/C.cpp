/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int last(int x)
{
    int ans = 0, pos = 0;
    while(x)
    {
        if(x & 1)
            ans = pos;
        x >>= 1;
        pos++;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int bit_x = last(x), mx = 0;
        vector<int> v(n), bits;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            bits.push_back(last(v[i]));
            mx = max(mx, bits[i]);
        }
        int ans = 0, temp = 0;
        map<int, int> mp;
        for(int i = 0; i <= 29; i++)
        {
            int a = 0, b = -1;;
            for(int j = 0; j < n; j++)
            {
                a |= 1 << ((v[j] >> i) & 1);
                mp[a]++;
            }
            if(a == 3 && b == -1)
            {
                int num = x;
                if(num & (1 << i))
                {
                    num ^= (1 << i);
                    for(int j = i - 1; j >= 0; j--)
                        num |= (1 << j);
                    b = 0;
                }
                ans = max(ans, num);
            }
            mp.clear();
        }
        cout << ans << '\n';
    }
    return 0;
}