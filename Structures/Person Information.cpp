//Store some information about a person: his/her name, citizenship number and salary.

#include<iostream>

using namespace std;

struct Person{
	char name[50];
	int age;
	float salary;
};

int main(){
	
	int n;
	cout<<"Enter the number of persons : ";
	cin>>n;
	Person p[n];
	for(int i=0;i<n;i++){
		cout<<"Enter name of "<<i+1<<" person - ";
		cin>>p[i].name;
		cout<<"Enter age of "<<i+1<<" person - ";
		cin>>p[i].age;
		cout<<"Enter salary of "<<i+1<<" person - ";
		cin>>p[i].salary;
	}
	cout<<endl<<"********Displaying Information********";
	for(int j=0;j<n;j++){
		cout<<endl<<"Name : "<<p[j].name<<endl;
		cout<<"Age : "<<p[j].age<<endl;
		cout<<"Salary : $"<<p[j].salary<<endl;
	}
	return 0;
}
