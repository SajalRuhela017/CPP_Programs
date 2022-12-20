//Q4 Robert Lafore

#include<iostream>

using namespace std;

struct employee{
	int number;
	float compensation;
};

int main(){
	
	employee e[3];
	cout<<"Enter the details of the employee -"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Employee number : ";
		cin>>e[i].number;
		cout<<endl<<"Enter the compensation : $";
		cin>>e[i].compensation;
	}
	for(int i=0;i<3;i++){
		cout<<"Number of employee "<<e[i].number<<"\tcompenstion $"<<e[i].compensation<<endl;
	}
	return 0;
}
