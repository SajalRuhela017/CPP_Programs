/**             ॐ
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
        int n, mx1 = 0, mx2 = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] >= mx1)
                mx2 = mx1, mx1 = a[i];
            if(a[i] > mx2 && a[i] < mx1)
                mx2 = a[i];
        }
        for(int i = 0; i < n; i++)
            cout << (a[i] == mx1 ? mx1 - mx2 : a[i] - mx1) << " ";
        cout << "\n";
    }
    return 0;
}