/**            ॐ
 *      author : rhsajal_017
**/

//-----------------------------BUBBLE SORT---------------------------
//Repeatedly swap two adajacent elements if they are in a wrong order
//-------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
 
void bubbleSort(vector<int> &v, int n)
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            if(v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    bubbleSort(v, n);
    for(auto &i: v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}