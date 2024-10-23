#include<iostream>
using namespace std;
class student
{
	public:
		int reg_no,i,n;
		char name[20];
		int marks[5];
		float avg;
		void get();
		void display();
}s;
void student::get(){
	int sum=0;
	cout<<"STUDENT INFORMATION SYSTEM:"<<endl;
	cout<<"Enter no of students:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Register number:";
		cin>>reg_no;
		cout<<"Enter Name:";
		cin>>name;
	}
	cout<<"Enter 5 subject marks:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];
		sum=sum+marks[i];
	}
	avg=sum/5.0;
}
void student::display(){
	cout<<"Register Number:"<<reg_no<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Marks:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<marks[i];
	}
	cout<<"Average:"<<avg<<endl;
}
int main()
{
	student s;
	s.get();
	s.display();
	return 0;
}
