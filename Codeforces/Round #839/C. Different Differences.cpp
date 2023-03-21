/**
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> k >> n;
        vector<int> ans;
        ans.push_back(1);
        for(int i = 1; i < k; i++)
        {
            int next = (i * i + i + 2) / 2, size = ans.size();
            if(n - next >= k - size - 1)
            {
                ans.push_back(next);
            }
            else
            {
                int last = ans.back();
                ans.push_back(++last);
            }
        }
        for(auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}