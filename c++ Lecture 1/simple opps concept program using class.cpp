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
		cout<<"Enter the roll number & marks of the student"<<endl;
		cin>>roll>>marks;
		}
			
    void showdata()
	{
		cout<<"roll number ="<<roll<<endl;
		cout<<"marks ="<<marks;
			}		
};
 
 int main()
 {
 	student obj;
 	obj.getdata();
 	obj.showdata();
 	return 0;
 }
