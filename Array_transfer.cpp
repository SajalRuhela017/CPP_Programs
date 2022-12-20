//Here we will insert an element in an array and will increase the size of array by 1.

#include<iostream>

using namespace std;

int main(){
	
	int size,pos,New;
	
	cout<<"Enter the size of the array you want to create : ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\n\nEnter the values of elements of Array.\n\n";
	
		for(int i=0;i<size;i++){
			cout<<"Enter "<<i+1<<" Element : ";
			cin>>arr[i];
		}
		
		
	cout<<"\n\nEnter the index of the array element you want to insert : ";
	cin>>pos;
	
	New=++size;
	int arr2[New];
	
	
		for(int i=0;i<pos;i++){
			arr2[i]=arr[i];
		}
		
		cout<<"\n\nEnter the value of element with index "<<pos<<endl;
		cin>>arr2[pos];

		for(int i=pos;i<size;i++){
			arr2[i+1]=arr[i];
		}
	
	
	cout<<"\n\nThe new array is :"<<endl;
	
		for(int i=0;i<New;i++){
			cout<<i+1<<" element is : "<<arr2[i]<<endl;
		}
		
return 0;
}



//#include<iostream>
//
//using namespace std;
//
//int main() {
//
//	int size,pos,num;
//
//	cout << "Enter the size of the array you want to create : ";
//	cin >> size;
//
//	int arr[100];
//
//	cout << "\n\nEnter the values of elements of Array.\n\n";
//
//	for (int i = 0;i < size;i++) {
//		cout << "Enter " << i + 1 << " Element : ";
//		cin >> arr[i];
//	}
//
//	cout << "\n\nThe entered elements of array is : " << endl;
//
//	for (int i = 0;i < size;i++) {
//		cout << i + 1 << " element is : " << arr[i] << endl;
//	}
//
//	cout << "\n\nEnter the position of the array element you want to insert : ";
//	cin >> pos;
//
//	cout << "\nEnter the number you want to put at position " << pos << ":";
//	cin >> num;
//	
//	size++;
//
//	for (int i = size-1;i>pos-1;i--)
//	{
//	  arr[i] = arr[i - 1];
//	}
//
//	arr[pos-1]=num;
//	cout << "\n\nThe new array is :" << endl;
//
//	for (int i = 0;i < size;i++) 
//	{
//		cout << i + 1 << " element is : " << arr[i] << endl;
//	}
//	return 0;
//}
