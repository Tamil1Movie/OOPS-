#include<iostream>
using namespace std;
int main()
{
	int a[100],n,*ptr,i,sum=0;
	ptr=a;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+(*(ptr+i));
	}
	cout<<"Sum of Array="<<sum;
	return 0;
	
}
