//Lucky Four
/*
Input
The first line of input consists of a single integer T, denoting the number of integers in Kostya's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurences of the digit 4 in the respective integer from Kostya's list.
*/

#include <iostream>
#include<cstring>
#include<string>

using namespace std;

int main() {
	
	int t;
	char num[15];
	cin>>t;
	while(t--){
		int count=0;
	    cin>>num;
	    for(int i=0;i<strlen(num);i++){
	        if(num[i]=='4'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
