/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long factorial(long long n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << factorial(n) << "\n";
    return 0;
}