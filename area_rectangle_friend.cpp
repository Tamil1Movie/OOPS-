#include<iostream>
using namespace std;
class Area{
	private:
		int l,b;
		int base,h;
	public:
		void get_r();
		friend int area_rectangle(int l,int b);
		void get_t();
		friend float area_triangle(int base,int h);
}
inline void Area::get_r(){
	cout<<"Enter length and breadth:";
	cin>>l>>b;
}
inline void Area:get_t(){
	cout<<"Enter base and height:";
	cin>>base>>h;
}
inline int area_rectangle(int l,int b)
{
	cout<<"Area of rectangle="<<l*b;
}
inline int area_triangle(int base,int h)
{
	cout<<"Area of triangle="<<0.5*base*h;
}
int main()
{
	Area a;
	a.get_r();
	a.get_t();
	a.area_rectangle();
	a.area_triangle();
	return 0;
}
