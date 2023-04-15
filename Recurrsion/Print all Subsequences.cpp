//  Time Complexity: O(n * 2^n)     Space Complexity: O(n)

/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void findSubsequence(int i, vector<int> &ds, vector<int> &v, vector<vector<int>> &ans)
{
    if(i == v.size())
    {
        ans.push_back(ds);
        return;
    }
    //not pick condition
    findSubsequence(i+1, ds, v, ans);

    //pick condition
    ds.push_back(v[i]);
    findSubsequence(i+1, ds, v, ans);
    //popping to remove again
    ds.pop_back();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n), ds;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<vector<int>> ans;
    findSubsequence(0, ds, v, ans);
    sort(ans.begin(), ans.end());
    for(auto &i: ans)
    {
        for(auto &j: i)
            cout << j << ' ';
        cout << '\n';
    }
    return 0;
}