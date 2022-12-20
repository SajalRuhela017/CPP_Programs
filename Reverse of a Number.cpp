#include<iostream>

using namespace std;

int main(){
	
	int num,n,rem,new_num=0;
	cout<<"Enter the number whose reverse you want: ";
	cin>>num;
	n=num;
	
		while(n!=0){
			rem=n%10;					
			new_num=rem+new_num*10;
			n=n/10;							
		}
	
	cout<<"The reversed number is "<<new_num<<"."<<endl;
	
		if(new_num==num){
			cout<<"The number "<<num<<" is a palindrome.";
		}else{
			cout<<"The number "<<num<<" is not a palindrome";
		}
	
return 0;

}


