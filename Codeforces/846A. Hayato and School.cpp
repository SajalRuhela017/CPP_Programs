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
        int n, e = 0, o = 0, count = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] & 1 ? o++ : e++;
        }
        if((n == 3 && o == 2) || e == n)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        vector<int> ans;
        if(o >= 3)
        {
            for(int i = 0; i < n; i++)
            {
                if(v[i] & 1)    ans.push_back(i + 1);
                if(ans.size() == 3)     break;
            }
        }
        else
        {
            bool flag = true;
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                if(flag && (v[i] & 1))
                {
                    ans.push_back(i + 1);
                    flag = false;
                }
                if(v[i] % 2 == 0 && count < 2)
                {
                    ans.push_back(i + 1);
                    count++;
                }
            }
        }
        for(auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}