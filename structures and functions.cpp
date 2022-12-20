/**
 *		author : rhsajal_017
**/

#include <bits/stdc++.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;	
};

void initialize(struct Rectangle *r , int l , int b)
{
	r->length = l;
	r->breadth = b;
}

void changepara(struct Rectangle *r , int l , int b)
{
	r->length = l;
	r->breadth = b;
}

int area(struct Rectangle r)
{
	return r.length * r.breadth;
}

int main()
{
	struct Rectangle r;
	initialize(&r , 10 , 5);
	cout << r.	length << " " << r.breadth << endl;
	cout << area(r) << endl;
	changepara(&r , 12 , 4);
	cout << r.	length << " " << r.breadth << endl;
	cout << area(r) << endl;
	return 0;
}

