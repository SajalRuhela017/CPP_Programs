//Finding products of digits of a number entered by user 
//Sample input : 345	(3x4x5)
//Sample output : 60

#include<iostream>

using namespace std;

int dash();
int pro(int);
int main(){
	
	char c;
	do{
		int num,ans=0;
		cout<<"Enter any number : ";
		cin>>num;
		ans=pro(num);
		cout<<"The product of its digits is : "<<ans<<endl;
		dash();
		cout<<"\nDo you want to caculate for some other number? Type 'y' to proceed and 'n' to exit.\n";
		cin>>c;
		cout<<endl;
	}while(c=='y' || c=='Y');
	cout<<"Thank you!!!";
	return 0;
}

int dash(){
	for(int i=1;i<85;i++){
		cout<<"-";
	}
	return 0;
}

int pro(int num){
	int rem,n,mul=1;
	n=num;
	while(n!=0){
		rem=n%10;
		mul*=rem;
		n/=10;
	}
	return(mul);
}
