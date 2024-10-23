#include<iostream>
using namespace std;
class U
{
	public:
		int value;
		unary U():value(0)
		{
		}
		unary int operator ++()
		{
			unary temp;
			++temp.value;
			return temp;
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	unary a1,a2;
	a1=++a2
	a1.display();
	a2.display();
	return 0;
}
