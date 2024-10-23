#include<iostream>
using namespace std;
class pre
{
	public:
		int value;
		pre():value(0)
		{
		}
		void operator ++()
		{
			++value;
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	pre p1,p2;
	++p1;
	++p2;
	p1.display();
	p2.display();
	return 0;
}
