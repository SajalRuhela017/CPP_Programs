//We will calculate reverse of a number entered by user using functions.

#include<iostream>

using namespace std;

int REV(int);
int PAL(int,int);

int main(){
	
	int num,new_num,ans;
	cout<<"Enter any number which you want to reverse : ";
	cin>>num;
	ans=REV(num);
	cout<<"The reverse of the number "<<num<<" is "<<ans<<".\n\n";
	PAL(num,new_num);
	return 0;
}

int REV(int num){
	
	int rem,ans=0;
	while(num!=0){
		rem=num%10;
		ans=rem+ans*10;
		num/=10;}
	return(ans);
}
int PAL(int num, int ans){
	if(ans==num){
		cout<<"The number "<<num<<" is Palindrome.";
		}else{
		cout<<"The number "<<num<<" is not a palindrome and its reverse is "<<ans<<".";}
}
