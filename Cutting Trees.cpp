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
    int k, m;
    cin >> k >> m;
    vector<int> trees;
    trees.push_back(2);
    int current_tree = 0;
    while(k--)
    {
        int x = ((trees[current_tree] + 1) % m) - 1, y = 0;
        trees[current_tree] = -1;
        current_tree++;
        while(y <= x)
            trees.push_back(y++);
    }
    // for(auto &i: trees)
    //     cout << i << ' ';
    // cout << '\n';
    cout << trees.size() - current_tree << '\n';
    return 0;
}