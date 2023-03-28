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
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        int n, zero = 0;
        cin >> n;
        vector<int> v(n), pos, neg;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(!v[i])
                zero++;
            else if(v[i] > 0)
                pos.push_back(v[i]);
            else
                neg.push_back(v[i]);
        }
        if(zero == n)
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
        int sum = 0;
        sort(pos.begin() , pos.end());
        sort(neg.begin() , neg.end());
        while(pos.size() || neg.size())
        {
            if(sum > 0)
            {
                cout << neg.back() << " ";
                sum += neg.back();
                neg.pop_back();
            }
            else
            {
                cout << pos.back() <<  " ";
                sum += pos.back();
                pos.pop_back();
            }
        }
        while(zero--)
            cout << "0 ";
        cout << "\n";
    }
    return 0;
}