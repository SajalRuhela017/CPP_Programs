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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(k);
        int req = k, mx = n * m - 3;
        priority_queue<int> pq;
        bool flag = true;
        for(int i = 0; i < k; i++)
            cin >> v[i];
        for(int i = 0; i < k; i++)
        {
            pq.push(v[i]);
            if(pq.size() > mx)
            {
                flag = false;
                break;
            }
            while(pq.top() == req)
            {
                pq.pop();
                req--;
            }
        }
        cout << (flag ? "YA" : "TIDAK") << '\n';
    }
    return 0;
}