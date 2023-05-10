/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int MAX = 1e5;
int permu[MAX + 1];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, one = 0, score = 0, ind  = -1;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(v[0] == 1 || v[n - 1] == 1)
        {
            cout << n - 1 << '\n';
            continue;
        }
        int sum = 0, i = 0, j = n - 1, check = 0;
        bool flag = true;
        while(i < j && flag)
        {
            while(v[i] < v[j])
            {
                sum += v[i];
                check++;
                if(sum == check * (check + 1) / 2)
                {
                    flag = false;
                    break;
                }
                i++;
            }
            while(v[i] > v[j])
            {
                sum += v[j];
                check++;
                if(sum == check * (check + 1) / 2)
                {
                    flag = false;
                    break;
                }
                j--;
            }
            if(!flag)
                break;
        }
        cout << j - i << '\n';
    }
    return 0;
}