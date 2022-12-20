#include<iostream>

// The program is designed to calculate grades obtained by students. 

using namespace std;

int main(){
	
	int a;
	cout<<"Enter marks scored by the student : ";
	cin>>a;
	if (a==100){
		cout<<"The student gets 'O' grade.";
	}else if (a<100 and a>=91){
		cout<<"The student gets 'A+' grade.";
	}else if (a<=90 and a>=81){
		cout<<"The student gets 'A' grade.";
	}else if (a<=80 and a>=71){
		cout<<"The student gets 'B+' grade.";
	}else if (a<=70 and a>=61){
		cout<<"The student gets 'B' grade.";
	}else if (a<=60 and a>=51){
		cout<<"The student gets 'C+' grade.";
	}else if (a<=50 and a>=41){
		cout<<"The student gets 'C' grade.";
	}else if (a<=40 and a>=31){
		cout<<"The student gets 'D+' grade.";
	}else if (a<=30 and a>=21){
		cout<<"The student gets 'D' grade and is fail.";
	}else{
		cout<<"The student gets 'E' grade and is fail.";
	}
	return 0;
}
