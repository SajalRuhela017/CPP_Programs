/*First program of structures.
Here we will enter ID, age and salary of an employee working in a comapny.*/

#include<iostream>

using namespace std;

struct employee{
	int ID;
	float age;
	double salary;
	};
	
int dash();
int main(){
	
	int size;
	cout<<"Enter the number of employees working in your company : ";
	cin>>size;
	employee e[size];
	for(int i=0;i<size;i++){
		cout<<"Enter ID of "<<i+1<<" employee--->"<<endl;
		cin>>e[i].ID;
		cout<<"Enter the age of "<<i+1<<" employee--->"<<endl;
		cin>>e[i].age;
		cout<<"Enter the salary of "<<i+1<<" employee--->"<<endl;
		cin>>e[i].salary;
	}
	dash();
	for(int i=0;i<size;i++){
		cout<<"The ID for the "<<i+1<<" employee is ---> "<<e[i].ID<<endl;
		cout<<"The age for the "<<i+1<<" employee is ---> "<<e[i].age<<endl;
		cout<<"The salary for the "<<i+1<<" employee is ---> "<<e[i].salary<<endl;
	}
	return 0;
}

int dash(){
	for(int i=1;i<=120;i++){
		cout<<"-";
	}
}
