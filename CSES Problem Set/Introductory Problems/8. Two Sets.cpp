#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int x = n * (n + 1) / 2;
    if(x & 1)
        cout << "NO" << '\n';
    else
    {
        cout << "YES" << '\n';
        int y = x / 2;
        int sum = 0, temp = -1;
        vector<int> one, two;
        while(sum != y)
        {
            sum += n;
            if(sum <= y)
                one.push_back(n--);
            else
            {
                sum -= n;
                temp = y - sum;
                one.push_back(temp);
                break;
            }
        }
        sum = 0;
        while(sum != y)
        {
            if(n == temp)
            {
                n--;
                continue;
            }
            sum += n;
            two.push_back(n--);
        }
        sort(one.begin(), one.end());
        sort(two.begin(), two.end());
        cout << one.size() << '\n';
        for(auto &i: one)
            cout << i << ' ';
        cout << '\n';
        cout << two.size() << '\n';
        for(auto &i: two)
            cout << i << ' ';
    }
    return 0;
}