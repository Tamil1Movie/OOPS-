#include<iostream>
using namespace std;
class pre
{
	public:
		int value;
		pre():value(10)
		{
		}
		pre operator ++()
		{
			++value;
			return *this;
		}
		pre operator --()
		{
			--value;
			return *this;
		}
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	pre prefix;
	cout<<"INITIAL VALUE:";
	prefix.display();
	++prefix;
	cout<<"After prefix ++:";
	prefix.display();
	--prefix;
	cout<<"After prefix --:";
	prefix.display();
	return 0;
	return 0;
}
