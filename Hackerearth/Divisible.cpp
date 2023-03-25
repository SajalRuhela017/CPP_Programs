#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int size,num_a=0,rem_a,num_b=0,rem_b,c,length;
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	for(int i=0;i<size/2;i++){
		c=array[i];
		while(c>0){
			rem_a=c%10;
			c/=10;
		}
		num_a=rem_a+num_a*10;
	}
//	cout<<num_a<<endl;		//Not required in output.... just for checking
	for(int i=size/2;i<size;i++){
		rem_b=array[i]%10;
		num_b=rem_b+num_b*10;
	}
//	cout<<num_b<<endl;		//Not required in output.... just for checking
	string s1 = to_string(num_a);
	string s2 = to_string(num_b);
	string s = s1 + s2;
	int num = stoi(s);
//	cout<<num;				//Not required in output.... just for checking
	if(num%11==0){
		cout<<"OUI";
	}else{
		cout<<"NON";
	}
	return 0;
}
