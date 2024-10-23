#include<iostream>
using namespace std;
class item
{
	public:
		int price[10];
		char product[10];
		void info();
		void display(int sum);
};
void info()
{
	int sum=0,i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter product name:";
		cin>>product;
		cout<<"Enter the price:";
		cin>>price;
	}
	for(i=0;i<10;i++)
	{
		sum=sum+price[i];
	}
	display(sum);
}		
void display(int sum)
{
	cout<<"Sum of product's prices:"<<sum;
}
int main()
{
	item i;
	i.info();
	return 0;
}
