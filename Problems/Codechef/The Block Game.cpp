/*Input
The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

Output
For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.*/

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n,num,new_num=0,rem;
	    cin>>n;
	    num=n;
	    while(n>0){
	        rem=n%10;
	        new_num=new_num*10+rem;
	        n/=10;
	    }
	    (num==new_num) ? cout<<"wins"<<endl : cout<<"loses"<<endl;
	}
	return 0;
}
