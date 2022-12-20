/**
 *      author : SAJAL RUHELA
**/ 

#include <iostream>

using namespace std;

void print(int n)
{
	n++;
    if(n <= 5)
    {
        print(n);
        cout << "Hello " << n << endl;
    }  
}

int main()
{
    int n = 0;
    print(n);
    return 0;
}
