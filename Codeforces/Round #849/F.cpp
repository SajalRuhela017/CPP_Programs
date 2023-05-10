/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

int digitSum(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] > 9)
                s.insert(i);
        }
        while(q--)
        {
            int type;
            cin >> type;
            if(type == 1)
            {
                int l, r, ind = 0;
                cin >> l >> r;
                l-- , r--;
                ind = l;
                while(!s.empty())
                {
                    auto it = s.lower_bound(ind);
                    if(*it > r || it == s.end())
                        break;
                    v[*it] = digitSum(v[*it]);
                    int temp = *it;
                    s.erase(*it);
                    if(v[temp] > 9)
                        s.insert(temp);
                    ind = temp + 1;
                }
            }
            else
            {
                int x;
                cin >> x;
                cout << v[x - 1] << '\n';
            }
        }
    }
    return 0;
}