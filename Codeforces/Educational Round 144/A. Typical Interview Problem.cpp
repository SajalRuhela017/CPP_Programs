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
        long long n;
        cin >> n;
        string s, temp = "";
        cin >> s;
        for(int i = 1; i < 100; i++)
        {
            if(i % 3 == 0)  temp += "F";
            if(i % 5 == 0)  temp += "B";
        }
        if(temp.find(s) != string::npos)
            cout << "YES"<< endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}