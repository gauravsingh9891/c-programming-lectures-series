#include<iostream>
using namespace std;
class maths
{
	private:
		float a,n;
	public:
	   void getdata(float s)
	   {
	   	 a=s;
	   	 n=a*a;
		   }
	void showdata();	   	
};

void maths::showdata()
{
	cout<<"The square of number is ="<<n;
}
int main()
{
	maths sq;
	sq.getdata(10);
	sq.showdata();
	return 0;
}
