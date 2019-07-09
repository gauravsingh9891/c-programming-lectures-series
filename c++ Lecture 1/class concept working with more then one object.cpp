#include<iostream>
using namespace std;
class student
{
	private:
		int roll;
		float marks; 
	public:
		
	void getdata()
	{
		cout<<"Enter the roll number & marks \n";
		cin>>roll>>marks;
		}	
		
	void showdata()
	{
	 	cout<<"Roll number="<<roll<<endl;
	 	cout<<"Marks ="<<marks<<endl;
		}	
		
};

int main()
{
	student s1,s2,s3;
	cout<<"\n Enter the records of 3 students \n";
	s1.getdata();
	s2.getdata();
	s3.getdata();
	cout<<"\n There are three records of students \n";
	s1.showdata();
	s2.showdata();
	s3.showdata();
	return 0;
	
}
