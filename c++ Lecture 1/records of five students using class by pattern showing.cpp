#include<iostream>
using namespace std;
class student
{
	private:
	int roll;
	float marks;
	char name[100],course[100];
	public:
	void getdata()
	{
		cout<<"enter the roll number,name,course & marks"<<endl;
		cin>>roll>>name>>course>>marks;
		}	
	void showdata()
	{
		cout<<roll<<"\t\t\t"<<name<<"\t\t"<<course<<"\t\t"<<marks<<endl;
		}		
};
int main()
{
  student s[5];
  for(int i=0;i<5;i++)
  {
  s[i].getdata();
}
  cout<<"\nThe Records of 5 students"<<endl;
  cout<<"Roll number \t\t"<<"Name \t\t"<<"course \t\t"<<"marks"<<endl;
  for(int i=0;i<5;i++)
  {
  s[i].showdata();
}
  return 0;
}
