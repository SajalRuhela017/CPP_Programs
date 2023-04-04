/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

vector<int> fib;
vector<int> pri;

bool prime(int n)
{
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    for(int i = 2; i * i < n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int findNum(int x, int y, int n)
{
    if(n == 1)
        return 1;
    if(min(y, fib[n + 1] - y + 1) > fib[n + 1] - fib[n])
        return 0;
    y = min(y, fib[n + 1] - y + 1);
    return findNum(y, x, n - 1);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    fib.resize(46);
    fib[0] = fib[1] = 1;
    bool vis[46];
    vis[0] = vis[1] = false;
    for(int i=2; i<46; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        if(fib[i] & 1)
            vis[i] = false;
        else
            vis[i] = true;
    }
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int tempx = (x & 1);
        int tempy = (y & 1);
        priority_queue<int> pq;
        map<int, int> mp;
        if(findNum(x, y, n))
        {
            cout << "yES\n";
            continue;
        }
        cout << "nO";
        cout << "\n";
    }
    return 0;
}