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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
                v[i]++;
        }
        for(int i = 1; i < n; i++)
        {
            if(v[i] % v[i - 1] == 0)
                v[i]++;
        }
        for(int i = 0; i < n; i++)
            cout<< v[i] << " ";
        cout << "\n";
    }
    return 0;
}