/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

vector<int> minimalOperations(vector<string> words)
{
    int n = words.size();
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        int count = 1, val = 0;
        for(int j = 1; j < words[i].size(); j++)
        {
            if(words[i][j] == words[i][j - 1])
                count++;
            else
            {
                val += count / 2;
                count = 1;
            }
        }
        val += count / 2;
        ans.push_back(val);
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans = minimalOperations(v);
    for(auto &i: ans)
        cout << i << ' ';
    cout << '\n';
    return 0;
}