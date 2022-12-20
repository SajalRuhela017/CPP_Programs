//Binary Sort

#include<iostream>

using namespace std;

class sorting{
	public :
		
		int sort(int arr[], int n){
		int temp;
		for(int i=0;i<n;i++){
			int count=0;
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				count=1;
				}
			}
			if(count==0)
				break;
		}
		return 0;
		}
		
		int printarr(int arr[],int n){
			for(int i=0;i<n;i++){
				cout<<arr[i]<<endl;
			}
			return 0;
		}
		 
};

int main(){
	
	int arr[]={12,62,11,7,34,77,92,47};
	sorting obj;
	int n;
	n=sizeof(arr)/sizeof(arr[0]);
	obj.sort(arr,n);
	obj.printarr(arr,n);
	return 0;
}
