/*Input:
The first line of input contains an integer T, denoting the number of testcases. Then T testcases follow. Each testcase contains a single integer N denoting the number.

Output:
The function will return integer where all zero's are converted to 5.
*/

#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class convert{
	
	public :
		int five(int n){
			string str = to_string(n);
			for(int i=0;i<strlen(str);i++){
				if(str[i]=='0'){
					str[i]=='5';
				}
			}
			return str;
		}
};

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		convert ob;
		cout<<ob.five(n)<<endl;
	}
	return 0;
}
