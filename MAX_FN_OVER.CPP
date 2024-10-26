#include<iostream>
using namespace std;
class maximum
{
    public:
          void max(int a,int b, int c)
            {
                if(a>b&&a>c)
                    cout<<a<<"is greater"<<endl;
                else if(b>c)
                    cout<<b<<"is greater"<<endl;
                else 
                    cout<<c<<"is greater"<<endl;
            }
            void max(double x,double y, double z)
            {
                if(x>y&&x>z)
                    cout<<x<<"is greater"<<endl;
                else if(y>z)
                    cout<<y<<"is greater"<<endl;
                else 
                    cout<<z<<"is greater"<<endl;
            }
};
int main()
{
    maximum m;
    m.max(25,15,100);
    m.max(15.3,20.3,56.3);
    return 0;
}
OUTPUT
100 is greater
56.3 is greater
