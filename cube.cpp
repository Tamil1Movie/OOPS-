#include<iostream>
using namespace std;
int main()
{
	int number,*ptr,cube;
	ptr=&number;
	cout<<"Enter a number:";
	cin>>*ptr;
	cube=(*ptr)*(*ptr)*(*ptr);
	cout<<"cube="<<cube;
	return 0;
}
