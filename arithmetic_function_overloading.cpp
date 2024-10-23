#include<iostream>
using namespace std;
class Arithmetic
{
	public:
		int a,b;
		double c,d;
		int add(int a,int b)
		{
			return a+b;
		}
		double add (double c,double d)
		{
			return c+d;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
		double sub(double c,double d)
		{
		 	return c-d;
		}
		int mul(int a,int b)
		{
			return a*b;
		}
		double mul(double c,double d)
		{
		 	return c*d;
		}
		int div(int a,int b)
		{
			return a/b;
		}
		double div(double c,double d)
		{
			return c/d;
		}
};
int main()
{
	Arithmetic a;
	cout<<"SUM="<<a.add(60,5)<<endl;
	cout<<"SUM="<<a.add(14.2,7.1)<<endl;
	cout<<"DIFFERENCE="<<a.sub(60,5)<<endl;
	cout<<"DIFFERENCE="<<a.sub(14.2,7.1)<<endl;
	cout<<"PRODUCT="<<a.mul(60,5)<<endl;
	cout<<"PRODUCT="<<a.mul(14.2,7.1)<<endl;
	cout<<"DIVISION="<<a.div(60,5)<<endl;
	cout<<"DIVISION="<<a.div(14.2,7.1)<<endl;
	return 0;
}
