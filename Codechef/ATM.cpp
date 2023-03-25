//ATM
/*Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges).
For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.*/

#include <iostream>
#include<iomanip>

using namespace std;

int main(){
	int x;        //x=withdrawl amount  y=account balance
	float y,rem;
	cin>>x>>y;
	if(x+0.5>y || x%5!=0){
	    cout<<fixed<<setprecision(2)<<y;
	}else{
	    rem=y-x-0.50;
	    cout<<fixed<<setprecision(2)<<rem;
	}
	return 0;
}
