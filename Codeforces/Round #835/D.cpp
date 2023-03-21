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
        int n, mn = INT_MAX;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn , a[i]);
        }
        int ind1 = 1, ind2 = 0;
        bool flag = true;
        vector<int> b;
        for(int i = 0; i < n - 1 && ind1 == 1; i++)
        {
            if(a[i] < a[i + 1])
            {
                ind1 = 0;
                b.push_back(i);
                while(a[i] <= a[i + 1] && i < n - 1)    i++;
                if(i == n - 1)
                {
                    cout << "YES";
                    break;
                }
                else
                    cout << "NO";
                b.pop_back();
            }
        }
        if(ind1 == 1)
            cout << "YES";
        cout << "\n";
    }
    return 0;
}