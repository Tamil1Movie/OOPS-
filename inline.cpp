#include<iostream>
using namespace std;
class operation{
	private:
		int n1,n2;
	public:
		void get();
		void sum();
		void difference();
		void product();
		void division();
};
inline void operation::get(){
	cout<<"Enter n1,n2:";
	cin>>n1;
	cin>>n2;
}
inline void operation::sum(){
	cout<<"Sum ="<<n1+n2<<endl;
}
inline void operation::difference(){
	cout<<"Difference ="<<n1-n2<<endl;
}
inline void operation::product(){
	cout<<"Product ="<<n1*n2<<endl;
}
inline void operation::division(){
	cout<<"Division ="<<n1/n2<<endl;
}
int main()
{
	operation op;
	op.get();
	op.sum();
	op.difference();
	op.product();
	op.division();
	return 0;
}
