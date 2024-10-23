#include<iostream>
using namespace std;
int main()
{
	int number,i,factorial=1;
	cout<<"Enter a number:"<<endl;
	cin>>number;
	for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	cout<<"Factorial of"<<number<<"="<<factorial<<endl;
	return 0;
}
