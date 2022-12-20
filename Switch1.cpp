//User will enter grade of student and we havre to provde him a remark about the student performance.
//using continue statement.

//#include<iostream>
//
//using namespace std;
//
//int main(){
//	 
//	char grade;
//	
//	while(true){
//	cout<<"Enter the grade student got : ";
//	cin>>grade;
//	
//	switch(grade){
//		
//		case 'A' : 
//			cout<<"Outstanding"<<endl;
//			continue;	
//		
//		case 'B' :
//			cout<<"Excellent"<<endl;
//			continue;
//		
//		case 'C' :
//			cout<<"Very Good"<<endl;
//			continue;
//			
//		case 'D' :
//			cout<<"Good"<<endl;
//			continue;
//			
//		case 'E' :
//			cout<<"Satisfied"<<endl;
//			continue;
//			
//		case 'F' :
//			cout<<"Fail"<<endl;
//			continue;
//			
//		default :
//		cout<<"Exit!";
//		return false;	
//	}
//}
//		return 0;
//} 




//using break statement.

#include<iostream>

using namespace std;

int main(){
	 
	char grade;
	
	while(true){
	cout<<"Enter the grade student got : ";
	cin>>grade;
	
	switch(grade){
		
		case 'A' : 
			cout<<"Outstanding"<<endl;
			break;	
		
		case 'B' :
			cout<<"Excellent"<<endl;
			break;
		
		case 'C' :
			cout<<"Very Good"<<endl;
			break;
			
		case 'D' :
			cout<<"Good"<<endl;
			break;
			
		case 'E' :
			cout<<"Satisfied"<<endl;
			break;
			
		case 'F' :
			cout<<"Fail"<<endl;
			break;
			
		default :
		cout<<"Exit!";
		return false;	
	}
}
		return 0;
} 
