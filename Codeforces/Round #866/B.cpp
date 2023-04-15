/**            ॐ
 *      author : rhsajal_017
**/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long

vector<int> nextSmaller(vector<int> &arr)
{
    stack<int> s;
    s.push(-1);
    int n = arr.size();
    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i--)
    {
        int item = arr[i];
        while(s.top() != -1 && arr[s.top()] >= item)
            s.pop();
        if(s.top() == -1)
            ans[i] = n;
        else
            ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmaller(vector<int> &arr)
{
    stack<int> s;
    s.push(-1);
    int n = arr.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++)
    {
        int item = arr[i];
        while(s.top() != -1 && arr[s.top()] >= item)
            s.pop();        
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestArea(vector<int> arr)
{
    vector<int> prev = prevSmaller(arr), next = nextSmaller(arr);
    int maxArea = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        int length = arr[i], breadth = next[i] - prev[i] - 1, newArea = length * breadth;
        maxArea = max(maxArea,newArea);
    }
    return maxArea;
}

int maxArea(vector<vector<int>> M, int n) 
{
    int maxi = INT_MIN;
    vector<int> histogram(n,0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(M[i][j] == 1)
                histogram[j]++;
            else
                histogram[j] = 0;
        }
        maxi = max(maxi,largestArea(histogram));
    }
    return maxi;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size(), rotate = 0;
        vector<vector<int>>v(n, vector<int>(n));
        for(int i = 0; i < n; i++)
        {
            int k = 0;
            for(int j = rotate; j < n; j++)
                v[i][j] = (s[k++] - '0');
            for(int j = 0; j < rotate; j++)
                v[i][j] = (s[k++] - '0');
            rotate++;
        }
        cout << maxArea(v, n);
        cout << '\n';
    }
    return 0;
}