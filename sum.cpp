#include<iostream>
using namespace std;
int main ()
{
	int number,i,sum=0;
	cout<<"Enter a number:";
	cin>>number;
	for(i=0;i<=number;i++)
	{
		sum=sum+i;
	}
	cout<<"SUM="<<sum<<endl;
	return 0;
}
