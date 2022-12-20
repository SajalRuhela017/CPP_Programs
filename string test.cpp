#include <iostream>

using namespace std;

int main()
{
	string s1 = "We are going for a movie.", s2 = "This is really awesome!", s3;
//	getline(cin, s3, '$');
	int n = s1.find("going"), m = s2.find("rea");
//	cout << s1 + " v/s " + s2 << "	:	" << s3;
	cout << n << " " << m << endl;
	return 0;
}
