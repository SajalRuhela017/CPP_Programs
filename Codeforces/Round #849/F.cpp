/**
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
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n), pref(n);
        cin >> v[0];
        pref[0] = v[0];
        for(int i = 1; i < n; i++)
        {
            cin >> v[i];
            pref[i] = pref[i - 1] + v[i];
        }
        while(q--)
        {
            int m;
            cin >> m;
            if(m == 1)
            {
                int l, r;
                cin >> l >> r;
                for(int i = l - 1; i < r; i++)
                {
                    int dig = v[i], sum = 0;
                    while(dig)
                    {
                        sum += dig % 10;
                        dig /= 10;
                    }
                    v[i] = sum;
                }
            }
            else
            {
                int x;
                cin >> x;
                cout << v[x - 1] << endl;
            }
        }
    }
    return 0;
}