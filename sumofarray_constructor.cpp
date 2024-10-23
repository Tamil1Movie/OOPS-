#include<iostream>
using namespace std;
class Sum
{
    int a[10],sum=0;
    public:
    Sum()
    {
          int a[10],n,sum=0;
    }
    void Sum_of_array(int n)
    {
          int i;
          cout<<"Enter number of elements:";
          cin>>n;
          cout<<"Enter array elements:";
          for(i=0;i<n;i++)
          {
                cin>>a[i];
          }
          cout<<"Given array:";
          for(i=0;i<n;i++)
          {
                cout<<a[i]<<" "<<endl;
          }
          for(i=0;i<n;i++)
          {
                sum=sum+a[i];
          }
          cout<<"SUM="<<sum;
    }
};
int main()
{
    int n;
      Sum s;
      s.Sum_of_array(n);

}
