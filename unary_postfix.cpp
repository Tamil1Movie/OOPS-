#include<iostream>
using namespace std;
class post
{
	public:
		int value;
		post():value(10)
		{
		}
		post operator ++(int)
		{
			post temp=*this;
			value++;
			return temp;
		}
		post operator --(int)
		{
			post temp=*this;
			value--;
			return temp;
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	post postfix;
	cout<<"INITIAL VALUE:";
	postfix.display();
	postfix++;
	cout<<"After postfix ++:";
	postfix.display();
	postfix--;
	cout<<"After postfix --:";
	postfix.display();
	return 0;
}
