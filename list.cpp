#include <iostream>
#include <list> 

using namespace std;

int main()
{
	list<int> l = {1, 2, 3, 4};
	
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	l.push_back(5);
	cout << "After pushback : ";
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	l.push_front(0);
	cout << "After pushfront : ";
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	l.pop_front();
	cout << "After pop front : ";
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	l.pop_back();
	cout << "After pop back : ";
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	
	for(auto i : l)
	{
		cout << i << " ";
	}
	cout << endl;
	
	return 0;
}
