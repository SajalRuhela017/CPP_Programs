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
    int tt, k = 1;
    cin >> tt;
    while(tt--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> p(n);
        for(int i = 0; i < n; ++i)
            cin >> p[i];
        sort(p.begin(), p.end());
        int i = 0, ans1 = 0, ans2 = 0, ans3 = 0, power = h, j = 0;
        vector<int> potion = {2, 2, 3};
        while(i < n)
        {
            if(p[i] < power)
            {
                power += (p[i] / 2);
                i++;
                ans1++;
            }
            else if(j < 3)
            {
                power *= potion[j];
                j++;
            }
            else
                break;
        }
        potion = {2, 3, 2};
        i = 0, power = h, j = 0;
        while(i < n)
        {
            if(p[i] < power)
            {
                power += (p[i] / 2);
                i++;
                ans2++;
            }
            else if(j < 3)
            {
                power *= potion[j];
                j++;
            }
            else
                break;
        }
        potion = {3, 2, 2};
        i = 0, power = h, j = 0;
        while(i < n)
        {
            if(p[i] < power)
            {
                power += (p[i] / 2);
                i++;
                ans3++;
            }
            else if(j < 3)
            {
                power *= potion[j];
                j++;
            }
            else
                break;
        }
        cout << max(ans1, max(ans2, ans3)) << '\n';
    }
    return 0;
}