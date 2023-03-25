//Enormous Input Test
/*Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.*/

#include<iostream>

using namespace std;

int main(){
	
	int n,k,count=0;
	cin>>n>>k;
	int t[n];
	for(int i=0;i<n;i++){
		cin>>t[i];
		if(t[i]%k==0){
			count++;
		}
	}
	cout<<count;
	return 0;
}
