#include<iostream>
using namespace std;
int main()
{
	int number,first_no=0,second_no=1,next_no=0,i;
	cout<<"Enter number of terms to be printed in fibonacci series:";
	cin>>number;
	cout<<first_no<<" ";
	cout<<second_no<<" ";
	for(i=2;i<number;++i)
	{
		next_no=first_no+second_no;
		cout<<next_no<<" ";
		first_no=second_no;
		second_no=next_no;
	}
	return 0;
}
