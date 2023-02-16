/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        long long a, b, n, m;
        cin >> a >> b >> n >> m;
        map<int , int> mp;
        long long price = 0, priceA = 0, priceB = 0, x = 0, amount = 0;
        long long f = n / (m + 1);
        priceA = a * m * f + (n - f * (m + 1)) * min(a , b);
        priceB = n * min(a , b);
        priority_queue<long long> pq;
        // price = a * m * n / (m + 1);
        // amount = 
        // while(amount < n)
        // {
        //     price = price + a * min(m , n - amount);
        //     amount += min(m + 1 , n - amount);
        //     if(n - amount <= m && n - amount > 0)
        //     { 
        //         price = price + (n - amount) * min(a , b);
        //         amount = n;
        //     }
        // }
        // cout << min(priceA , min(priceB , price)) << endl;
        cout << min(priceA , priceB) << endl;
    }
    return 0;
}