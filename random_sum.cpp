//Here we will operate numbers entered by user.
// user will also tell us how many umners are to be operated.
//on hold.... will study in array.

#include<iostream>

using namespace std;

int main(){
	
	int a,num;
	char op,choice;
	
	do{
		int sum=0,pro=1;
	
	cout<<"Enter how many numbers you want to operate : ";
	cin>>a;
	cout<<"What Arithmatic Operator you want to use here : ";
	cin>>op;
		

		
			switch(op){
			
				case '+' :
		
					for(int i=1;i<=a;i++){
				
						cout<<"Enter the number"<<endl;
						cin>>num;
						sum+=num;
					}
					cout<<"The sum of these numbers is : "<<sum<<endl<<endl;
					break;
				
//				case '-' :
//					
//					for(int i=1;i<=a;i++){
//						
//						
//						cout<<"Enter the number"<<endl;
//						cin>>num;
//						sum-=num;
//					}
//					
//					cout<<"The difference of these numbers is : "<<num<<endl<<endl;
//					break;
//					
				case '*' : 
					
					for(int i=1;i<=a;i++){
						
						cout<<"Enter the number"<<endl;
						cin>>num;
						pro*=num;
					}
					cout<<"The product of these numbers is : "<<pro;
					break;
				
				default : 
				
					cout<<"Unable to perform selected action."<<endl<<endl;
					break;
			}
		
		
		cout<<"Do you want to operate numbers again? Type 'y' for Yes and 'n' for No.";
		cin>>choice;
			
	}while(choice=='y' || choice=='Y');
	
	cout<<"Thank You!";
	
return 0;
}

