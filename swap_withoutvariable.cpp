#include<iostream>
void swap(int*,int*);
using namespace std;
int main()
{
	int n1=25,n2=50;
	cout<<"Before swap:"<<endl<<"Number1="<<n1<<endl<<"Number2="<<n2<<endl;
	swap(n1,n2);
	cout<<"After swap:"<<endl<<"Number1="<<n1<<endl<<"Number2="<<n2<<endl;
	return 0;
}
void swap(int*n1,int*n2)
{
	*n1=*n1+*n2;
	*n2=*n2-*n2;
	*n2=*n1-*n2;
}
