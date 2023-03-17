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
        long long n, count = 1, mx = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin() , v.end());
        for(int i = 1; i < n; i++)
        {
            if(v[i] == v[i - 1])
                count++;
            else
                count = 1;
            mx = max(mx , count);
        }
        cout << n - mx << endl;
    }
    return 0;
}