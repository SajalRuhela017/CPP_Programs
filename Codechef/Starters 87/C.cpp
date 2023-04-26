/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
#define int long long

int calc(int a, int b)
{
    int ans = 1;
    while(b)
    {
        if(b & 1)
            ans = (ans * 1LL * a) % mod;
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, correct = 0;
        cin >> n;
        vector<int> v(n), temp1(n), temp2(n), check(n, 1);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            correct += (v[i] == i + 1);
            mp[v[i]]++;
        }
        temp1[0] = v[0];
        temp2[n - 1] = v[n - 1];
        priority_queue<int> pq;
        for(int i = 1; i < n; i++)
        {
            temp1[i] = max(temp1[i - 1], v[i]);
        }
        for(int i = n - 2; i >= 0; i--)
        {
            temp2[i] = min(temp2[i + 1], v[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(i < n - 1 && v[i] > temp2[i + 1])
                check[i] = 0 , mp[v[i]]--;
            if(i > 0 && v[i] < temp1[i - 1])
                check[i] = 0 , mp[v[i]]--;
        }
        vector<int> okay(n);
        for(auto &i: okay)
            i += 1;
        int sum = 0;
        for(auto &i: check)
            sum += i;
        int ans = calc(2, sum);
        if(sum == n)
            ans = ans - 1;
        cout << ans << '\n';
    }
    return 0;
}