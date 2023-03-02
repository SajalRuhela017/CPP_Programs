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
        long long n, ans = 0;
        cin >> n;
        vector<long long> v(n);
        priority_queue<long long> pq;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i])
                pq.push(v[i]);
            if(!v[i])
            {
                if(!pq.empty())
                {
                    int x = pq.top();
                    ans += x;
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}