/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> pref(n), suff(n);
        pref[0] = (v[0] == 2 ? 1 : 0);
        suff[n - 1] = (v[n - 1] == 2 ? 1 : 0);
        for(int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + (v[i] == 2);
            suff[n - i - 1] = suff[n - i] + (v[n - i - 1] == 2);
        }
        int ans = -2;
        for(int i = 0; i < n - 1; i++)
        {
            if(pref[i] == suff[i + 1]) 
            {
                ans = i;
                break;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}