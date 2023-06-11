/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<char> v(n);
    vector<int> freq(26), ans;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i] - 'a']++;
        int score = 0;
        for(int j = 0; j < (v[i] - 'a'); j++)
            score += freq[j];
        ans.push_back(score);
    }
    for(auto &i: ans)
        cout << i << '\n';
    return 0;
}