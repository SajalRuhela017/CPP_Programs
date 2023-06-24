/**            ॐ
 *      author : rhsajal_017
**/

//---------------------------------INSERTION SORT--------------------------------
//Insert an element from unsorted array to its corrected position in sorted array
//-------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void insertionSort(vector<int> &v, int n)
{
    for(int i = 1; i < n; i++)
    {
        int current = v[i], j = i - 1;
        while(v[j] > current && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = current;
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
    insertionSort(v, n);
    for(auto &i: v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}