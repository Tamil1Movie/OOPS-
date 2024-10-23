#include<iostream>
using namespace std;
class post
{
	public:
		int value;
		post():value(0)
		{
		}
		void operator ++(int)
		{
			value++;
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	post p1,p2;
	p1++;
	p2++;
	p1.display();
	p2.display();
	return 0;
}
