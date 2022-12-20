//Array of structures


#include<iostream>

using namespace std;

struct details{
	char name[100];
	int age;
	int Class;
	char section;
	float marks;
};

int main(){
	
	details student[5];
	cout<<"Enter the following parameters : "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Enter details for student "<<i+1<<endl;
		cout<<"Name : ";
		cin>>student[i].name;
		cout<<"Age : ";
		cin>>student[i].age;
		cout<<"Class : ";
		cin>>student[i].Class;
		cout<<"Section : ";
		cin>>student[i].section;
		cout<<"Marks : ";
		cin>>student[i].marks;
	}
	for(int i=0;i<5;i++){
		cout<<"Student "<<i+1<<endl<<student[i].name<<endl<<student[i].age<<endl<<student[i].Class<<endl<<student[i].section<<endl<<student[i].marks<<endl<<endl;
	}
	return 0;
}
