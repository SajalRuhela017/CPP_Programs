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
        long long n, zero = 0, mn = INT_MAX, mx = -1;
        cin >> n;
        vector<long long> v(n), pos;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(!v[i])
                zero++;
            else
            {
                pos.push_back(v[i]);
                mn = min(mn , v[i]);
                mx = max(mx , v[i]);
            }
        }
        if(zero == n)
        {
            cout << 1 << "\n";
            continue;
        }
        if(zero > ((n + 1) / 2))
        {
            if(mx == 1)
                cout << 2 << "\n";
            else
                cout << 1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}