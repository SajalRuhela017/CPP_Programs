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
        long long n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        long long i = 0, j = n - 1, mn = 1, mx = n;
        bool flag = false;
        while(i < j)
        {
            if(v[i] == mn)
                mn++ , i++;
            else if(v[i] == mx)
                mx-- , i++;
            if(v[j] == mn)
                mn++ , j--;
            else if(v[j] == mx)
                mx-- , j--;
            if(v[i] != mn && v[i] != mx && v[j] != mn && v[j] != mx)
            {
                flag = true;
                break;
            }
        }
        if(flag)    
            cout << i + 1 << " " << j + 1 << endl;
        else    
            cout << -1 << endl;
    }
    return 0;
}