#include<iostream>
using namespace std;
class cal
{
	private:
		float a,b,n;
	public:
	 void getdata(float l,float m)
	 {
	 	a=l;
	 	b=m;
	 	n=a+b;
		 }	
	void showdata();	 
};

void cal::showdata()
{
	cout<<"The Addition of two number is ="<<n;
}
int main()
{
	cal add;
	add.getdata(10,20);
	add.showdata();
	return 0;
}
