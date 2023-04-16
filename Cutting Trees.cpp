//In a perticular field, there are trees in a single row from left to right. Each tree has a value V. You cut trees from left to right and for each tree of value V that you cut, you plant (V+1)%M trees on the right most end with values ranging from 0 to ((V+1)%M)-1.
//Initially there was only one tree with value 2. Find total number of trees present after cutting K trees.

//INPUT FORMAT
//k, dnenoting number of trees to cut
//m, denoting the modulus value

//OUTPUT FORMAT
//total number of trees present after cutting K trees

//Example 1
//INPUT: k = 1, m = 5
//OUTPUT: 3

//Example 2
//INPUT: k = 1, m = 2
//OUTPUT: 1


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