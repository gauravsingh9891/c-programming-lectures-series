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
			cout<<"Enter the roll number & marks of students"<<endl;
			cin>>roll>>marks;
		}
		
		void showdata()
		{
			cout<<"Roll number ="<<roll<<endl;
			cout<<"Marks ="<<marks<<endl;
		}
		
};
  
  int main()
  {
  	student s[3];
  	cout<<"Enter the records of 3 students\n";
  	for(int i=0;i<3;i++)
  	{
  		s[i].getdata();
	  }
	 cout<<"The Record of 3 students\n";
	 for(int i=0;i<3;i++)
	 {
	 	s[i].showdata();
	  } 
	  return 0;
  }
