//Input
//The first line of input consists of a single integer N denoting the number of soldiers. The second line of input consists of N space separated integers 
//A1, A2, ..., AN, where Ai denotes the number of weapons that the ith soldier is holding.
//
//Output
//Generate one line output saying "READY FOR BATTLE", if the army satisfies the conditions that Kattapa requires 
//or "NOT READY" otherwise (quotes for clarity).

#include<iostream>

using namespace std;

int main(){
	
	int n,count_e=0,count_o=0;
	cin>>n;
	int wep[n];
	for(int i=0;i<n;i++){
		cin>>wep[i];
		(wep[i]%2==0) ? count_e++ : count_o++;
	}
	(count_e>count_o) ? cout<<"READY FOR BATTLE" : cout<<"NOT READY";
	return 0;
}
