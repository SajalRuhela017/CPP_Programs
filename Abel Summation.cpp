//Here we will calculate sum of a series which is 1-2+3-4+5-6 and so on.......

#include<iostream>

using namespace std;

int main(){
	
	int sum=0,diff=0,ans,n;
	
	cout<<"Here we will print the sum of the series 1-2+3-4... upto n terms."<<endl;
	cout<<"Enter the number upto which you want the sum according to this series : ";
	cin>>n;
	
		for(int i=1;i<=n;i+=2){
			sum+=i;
		}
		for(int i=2;i<=n;i+=2){
			diff+=i;
		}
		
		ans=sum-diff;
	cout<<"The answer is "<<ans<<".";

return 0;
}
