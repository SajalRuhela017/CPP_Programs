/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

void merge(vector<int> &v, int low, int mid, int high)
{
    int i = 0, j = 0, k = low;
    int left = mid - low + 1, right = high - mid;
    vector<int> L(left), R(right);
    for(int a = 0; a < left; a++)
        L[a] = v[low + a];
    for(int a = 0; a < right; a++)
        R[a] = v[mid + 1 + a];
    while(i < left && j < right)
    {
        if(L[i] <= R[j])
        {
            v[k] = L[i];
            i++;
        }
        else
        {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < left)
    {
        v[k] = L[i];
        k++ , i++;
    }
    while(j < right)
    {
        v[k] = R[j];
        k++ , j++;
    }
}

void mergeSort(vector<int> &v, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);
        merge(v, low, mid, high);
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
    mergeSort(v, 0, n - 1);
    for(auto &i: v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}