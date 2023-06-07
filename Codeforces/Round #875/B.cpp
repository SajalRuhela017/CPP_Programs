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
        int n;
        cin >> n;
        vector<int> a(n), b(n), A(2*n), B(2*n), C(2*n), D(2*n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            A[i] = a[i];
            B[i] = a[i];
            C[n - i - 1] = a[i];
            D[n - i - 1] = a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            A[n + i] = b[i];
            B[2 * n - i - 1] = b[i];
            C[n + i] = b[i];
            D[2 * n - i - 1] = b[i];
        }
        vector<int> ans;
        int val = 1, count = 1;
        for(int i = 1; i < 2 * n; i++)
        {
            if(A[i] == A[i - 1])
            {
                count++;
                val = max(val, count);
            }
            else
                count = 1;
        }
        ans.push_back(val);
        val = 1, count = 1;
        for(int i = 1; i < 2 * n; i++)
        {
            if(B[i] == B[i - 1])
            {
                count++;
                val = max(val, count);
            }
            else
                count = 1;
        }
        int start = 0;
        vector<int> temp_a(2 * n + 1), temp_b(2 * n + 1);
        while(start < n)
        {
            int end = start;
            while(end < n && a[end] == a[start])
                end++;
            temp_a[a[start]] = max(temp_a[a[start]], end - start);
            start = end;
        }
        ans.push_back(val);
        val = 1, count = 1;
        for(int i = 1; i < 2 * n; i++)
        {
            if(C[i] == C[i - 1])
            {
                count++;
                val = max(val, count);
            }
            else
                count = 1;
        }
        start = 0;
        while(start < n)
        {
            int end = start;
            while(end < n && b[end] == b[start])
                end++;
            temp_b[b[start]] = max(temp_b[b[start]], end - start);
            start = end;
        }
        ans.push_back(val);
        val = 1, count = 1;
        for(int i = 1; i < 2 * n; i++)
        {
            if(D[i] == D[i - 1])
            {
                count++;
                val = max(val, count);
            }
            else
                count = 1;
        }
        ans.push_back(val);
        sort(ans.begin(), ans.end());
        start = 0;
        int sol = 0;
        for(int i = 1; i <= 2 * n; i++)
            sol = max(sol, temp_a[i] + temp_b[i]);
        cout << sol << '\n';
    }
    return 0;
}