#include<iostream>
using namespace std;
class factorial
{       
      int f=1,n;
      public:
      factorial()
      {
            int f=1,n;
      }
      void fact(int n)
      {
            int i;
            cout<<"Enter a number:";
            cin>>n;
            for(i=1;i<=n;i++)
            {
                  f=f*i;
            }
            cout<<"Factorial="<<f;
      }
};
int main()
{
      int n;
      factorial facto;
      facto.fact(n);
      return 0;
}
