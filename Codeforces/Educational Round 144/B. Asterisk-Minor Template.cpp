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
        string a, b, ans = "";
        bool flag = true;
        cin >> a >> b;
        if(a[0] == b[0])
        {
            cout << "YES\n" << a[0] << "*\n";
            flag = false;
        }
        else if(a[a.size() - 1] == b[b.size() - 1])
        {
            cout << "YES\n" << "*" << a[a.size() - 1] << endl;
            flag = false;
        }
        else
        {
            for(int i = 0; i < a.size() - 1; i++)
            {
                string s = "";
                s += a[i];
                s += a[i + 1];
                if(b.find(s) != string::npos)
                {
                    cout << "YES\n" << "*" << s << "*\n";
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << "NO" << endl;
    }
    return 0;
}