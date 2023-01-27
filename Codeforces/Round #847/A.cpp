/**
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
        long long count = 0;
        string s, pi = "3141592653589793238462643383279";
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == pi[i])   count++;
            else    break;
        }
        cout << count << endl;
    }
    return 0;
}