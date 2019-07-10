#include<iostream>
using namespace std;
class emp
{
	private:
		int empid;
		char empname[30];
		long int sal;
	public:
	    void getdata();
		void showdata();			
};
 
 void emp::getdata()
 {
 	cout<<"Enter the Employee ID, Name & Salary"<<endl;
 	cin>>empid;
 	cin>>empname;    //cin.getline(empname,30)
 	cin>>sal;
 }

void emp::showdata()
{
	cout<<"Employee ID ="<<empid<<endl;
	cout<<"Name ="<<empname<<endl;
	cout<<"Salary ="<<sal<<endl;
}

int main()
{
	emp obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
