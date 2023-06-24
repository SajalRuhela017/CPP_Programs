/**            ॐ
 *      author : rhsajal_017
**/

//---------------------------------------SELECTION SORT---------------------------------------------
//Find minimum element in unsorted array and swap it with element at the beginning of unsorted array
//--------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void selectionSort(vector<int> &v, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v[j] < v[i])
                swap(v[i], v[j]);
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
    selectionSort(v, n);
    for(auto &i: v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}