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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long n, sum = 0, one = 0;
        cin >> n;
        vector<long long> v(n);
        unordered_map<long long , long long> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if(v[i] == 1)
                one++;
        }
        if(!one)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(v.begin() , v.end());
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == 1)
                sum += v[i];
            else if(v[i] <= sum)
                sum += v[i];
            else
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;        
    }
    return 0;
}