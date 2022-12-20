//Linear Search

#include<iostream>

using namespace std;

int linearsearch(int a,int nums[],int n){
	for(int i=0;i<n;i++){
		if(nums[i]==a){
			return i;
		}
	}
	return -1;
}

int main(){
	
	int nums[10]={45,81,64,91,23,14,39,52,77,105};
	int a,n,result;
	n=sizeof(nums)/sizeof(nums[0]);
	
	cout<<"Enter the number you want to find the array : ";
	cin>>a;
	
	result=linearsearch(a,nums,n);
	
	(result>=0 && result<n) ? cout<<"The element "<<a<<" is present at index : "<<result<<endl :
	cout<<"The element "<<a<<" is not present."<<endl;
	
	return 0;
}


