//User defined calculator
//*********Welcome to calculator*********
//1. Addition
//2. Substraction
//3. Multiplication
//4. Division
//5. Exit
//
//Perform the action demanded by the user unless user opts for exit.
//made with do....while and if commands.


//#include<iostream>
//
//using namespace std;
//
//int main(){
//	
//	int num,a,b;
//	
//	cout<<"*********Welcome to my Calculator*********"<<endl;
//	
////we have used "do....while" loop for entering the values again and again unless user exits the program.
//
//	do {
//		
//	cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit \n"<<endl;
//	cin>>num;
//	
//	if(num==1){
//	
//	cout<<"Enter two numbers you want add : ";
//	cin>>a>>b;
//	cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
//	
//	}else if(num==2){
//		
//		cout<<"Enter two numbers you want subtract : ";
//		cin>>a>>b;
//		cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
//		
//	}else if(num==3){
//		
//		cout<<"Enter two numbers you want multiply : ";
//		cin>>a>>b;
//		cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
//		
//	}else if(num==4){
//		
//		cout<<"Enter two numbers you want divide : ";
//		cin>>a>>b;
//		cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
//		
//	}else if(num==5){
//		
//		cout<<"Thank you for using my calculator. Please come again.";
//		exit(0);
//		
//	}else{
//		
//		cout<<"Please enter a valid input. Try again."<<endl;
//	}
// 
//	cout<<endl;
//	cout<<"Enter any operation sequence number again : ";
//	cout<<endl;	
//
//}    //end of do loop 
//
//	while (num=5);
//
//	return 0;
//}



//Now we will same calculator with switch and while(true) commands.


#include<iostream>

using namespace std;

int main(){
	
	int num,a,b;
	
	cout<<"*********Welcome to my Calculator*********"<<endl;
	
	while(true){
		
		cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exit \n"<<endl;
	    cin>>num;
	    
	    switch(num){
	    	
	    	case 1 :
	    		
	    		cout<<"Enter two numbers you want add : ";
				cin>>a>>b;
				cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
				break;
			
			case 2 :
					
				cout<<"Enter two numbers you want subtract : ";
				cin>>a>>b;
				cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
				break;
				
			case 3 :
				
				cout<<"Enter two numbers you wnat to multiply : ";
				cin>>a>>b;
				cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;	
				break;
				
			case 4 :
	    	
	    		cout<<"Enter two numbers you want divide : ";
				cin>>a>>b;
				cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
				break;
				
			case 5 :
				
				cout<<"Thank you for using my calculator. Please come again.";
				exit(0);
				break;
				
				
			default :
				
				cout<<"Please enter a valid input. Try again."<<endl;
				return false;
						
		}				//switch ends.
		
						cout<<"Please enter an operation sequence again."<<endl;
						
	} 					//while ends.
	return 0;
}
