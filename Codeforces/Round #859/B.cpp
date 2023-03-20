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
        long long n, e_sum = 0, sum = 0;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if(v[i] % 2 == 0)
                e_sum += v[i];
        }
        sum -= e_sum;
        cout << (e_sum > sum ? "YES" : "NO") << endl;
    }
    return 0;
}