#include<iostream>
using namespace std;
int prod(int n)
{
	static int prod=1;
	prod*=n;
	return prod;
}
int main()
{
	cout<<prod(2)<<endl;
	cout<<prod(3)<<endl;
	cout<<prod(8)<<endl;
}
