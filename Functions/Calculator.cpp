//Menu driven Calculator using function

#include<iostream>

using namespace std;

int ADD(int,int);
int SUB(int,int);
int MUL(int,int);
int DIV(int,int);

int main(){
	
	int a,b,sno,sum,diff,pro,div;
	
	cout<<"********************Welcome to Calculator********************";
	cout<<"\n\nEnter the operation you want to perform : \n1.Addition \n2.Substraction \n3.Multiplication \n4.Division \n5.Exit\n";
	cin>>sno;
	
	switch(sno){
		
		case 1 : 
			cout<<"Enter the numbers you want to add : \n";
			cin>>a>>b;
			sum = ADD(a,b);
			cout<<"\nThe sum of these two numbers is : "<<sum;
			break;
			
		case 2 : 
			cout<<"Enter two numbers you want to subtract : \n";
			cin>>a>>b;
			diff = SUB(a,b);
			cout<<"\nThe difference of these two numbers is : "<<diff;
			break;
			
		case 3 :
			cout<<"Enter two numbers you want to multiply : \n";
			cin>>a>>b;
			pro = MUL(a,b);
			cout<<"\nThe product of these two numbers is : "<<pro;
			break;
			
		case 4 : 
			cout<<"Enter two numbers you want to divide : \n";
			cin>>a>>b;
			div = DIV(a,b);
			cout<<"\nThe quotient of these two numbers is : "<<div;
			break;
			
		case 5 : 
			cout<<"\nThank You!!!";
			break;
			
		default : 
			cout<<"You have entered the wrong value. Try again!!";
	}
	return 0;	
}

int ADD(int a,int b){
	return(a+b);
}

int SUB(int a, int b){
	return(a-b);
}
int MUL(int a, int b){
	return(a*b);
}
int DIV(int a, int b){
	return(a/b);
}
