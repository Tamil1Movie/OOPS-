#include<iostream>
using namespace std;
class minimum
{
    public:
          void min(int a,int b, int c)
            {
                if(a<b&&a<c)
                    cout<<a<<" is minimum"<<endl;
                else if(b<c)
                    cout<<b<<" is minimum"<<endl;
                else 
                    cout<<c<<" is minimum"<<endl;
            }
            void min(double x,double y, double z)
            {
                if(x<y&&x<z)
                    cout<<x<<" is minimum"<<endl;
                else if(y<z)
                    cout<<y<<" is minimum"<<endl;
                else 
                    cout<<z<<" is minimum"<<endl;
            }
};
int main()
{
    minimum m;
    m.min(16,88,50);
    m.min(21.5,46.7,18.7);
    return 0;
}
OUTPUT
16 is minimum
18.7 is minimum
