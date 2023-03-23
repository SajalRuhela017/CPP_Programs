//Deleting and shifting

#include<iostream> 

using namespace std;

int main(){
	
	int tiles[20];
	int n,index;
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the elements of the array -\n";
	for(int i=0;i<n;i++){
		cin>>tiles[i];
	}
	cout<<endl<<"Enter the index at which element is to be deleted : ";
	cin>>index;
	for(int i=index+1;i<n;i++){
		tiles[i-1]=tiles[i];
	}
	n--;
	for(int j=0;j<n;j++){
		cout<<tiles[j]<<endl;
	}
	return 0;
}
