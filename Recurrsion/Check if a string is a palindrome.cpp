/**             ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

bool isPalin(string s, long long i)
{
    if(i >= s.size() / 2)
        return true;
    if(s[i] != s[s.size() - i - 1])
        return false;
    return isPalin(s, i + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << isPalin(s, 0) << "\n";
    return 0;
}