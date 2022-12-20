//Q3 Robert Lafore

#include<iostream>

using namespace std;

struct Distance{
	int feet;
	float inches;
};
struct Volume{
	Distance length;
	Distance width;
	Distance height;
};

int main(){
	
	float L1,W1,H1,L2,W2,H2;
	Volume room2,room1={{16,3.5}, {12,6.25}, {8,1.75}};
	L1=room1.length.feet+room1.length.inches/12;
	W1=room1.width.feet+room1.width.inches/12;
	H1=room1.height.feet+room1.height.inches/12;
	cout<<"Volume of the room 1 is "<<L1*W1*H1<<" feet^3"<<endl<<endl;
	cout<<"Enter the dimension for room 2 -"<<endl;
	cout<<"Length : ";
	cin>>room2.length.feet>>room2.length.inches;
	cout<<endl<<"Width : ";
	cin>>room2.width.feet>>room2.width.inches;
	cout<<endl<<"Height : ";
	cin>>room2.height.feet>>room2.height.inches;
	L2=room2.length.feet+room2.length.inches/12;
	W2=room2.width.feet+room2.width.inches/12;
	H2=room2.height.feet+room2.height.inches/12;
	cout<<endl<<"The volume of room2 is "<<L2*W2*H2<<" feet^3";
	
	return 0;
}
