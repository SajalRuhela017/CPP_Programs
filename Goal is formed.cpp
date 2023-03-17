/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string goal;
    cin >> goal;
    vector<string> target(n);
    map<string , int> mp;
    vector<bool> dp(goal.size() + 1 , false);
    dp[0] = true;
    for(int i = 0; i < n; i++)
    {
        cin >> target[i];
    }
    for(int i = 1; i <= goal.size(); i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(dp[j] && (find(target.begin() , target.end() , goal.substr(j, i - j)) != target.end()))
            {
                dp[i] = true;
                break;
            }
        }
    }
    if(dp.back())
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}