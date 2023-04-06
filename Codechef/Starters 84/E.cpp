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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<string> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(a[i].size() != b[i].size())
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            vector<int> A(10), B(10);
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < a[i].size(); j++)
                    A[a[i][j] - '0']++;
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < b[i].size(); j++)
                    B[b[i][j] - '0']++;
            }
            int temp = 0;
            for(int i = 0; i < 10; i++)
                temp += (A[i] > B[i]);
            if(temp > k)
                cout << "No" << "\n";
            else
                cout << "Yes" << '\n';
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}