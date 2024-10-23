#include<iostream>
using namespace std;
class area
{    
      int l,b;
      public:
      area()
      {
            int l,b;
      }
      void area_rectangle(int l,int b)
      {
              int A;
              A=l*b;
              cout<<"Area of rectangle:"<<A;
      }
};
int main()
{
      int l,b;
      area a;
      cout<<"Enter length and breadth:";
      cin>>l;
      cin>>b;
      a.area_rectangle(l,b);
      return 0;
}
