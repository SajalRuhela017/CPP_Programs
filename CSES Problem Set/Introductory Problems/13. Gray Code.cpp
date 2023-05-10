#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007

vector<int> decimalToBinary(int num, int len)
{
    vector<int> decimalNumber;
    for(int i = len - 1; i >= 0; i--)
        decimalNumber.push_back((num >> i) & 1);
    return decimalNumber;
}

vector<int> getGrayCode(vector<int> num)
{
    vector<int> code;
    code.push_back(num[0]);
    for(int i = 0; i < (int)num.size() - 1; i++)
        code.push_back(num[i] ^ num[i + 1]);
    return code;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> binaryNumber, grayCode;
    for(int i = 0; i < pow(2, n); i++)
    {
        binaryNumber = decimalToBinary(i, n);
        grayCode = getGrayCode(binaryNumber);
        for(auto &j: grayCode)
            cout << j;
        cout << '\n';
    }
    return 0;
}