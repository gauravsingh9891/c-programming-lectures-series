#include<iostream>
using namespace std;
class simple
{
	private:
		int n,p,r,t;
	public:
	void getdata(int a,int b, int c)
	{
		p=a;
		r=b;
		t=c;
		n=(p*r*t)/100;
	}
	void showdata();	
};

void simple::showdata()
{
	cout<<"Simple interest is ="<<n;
}
int main()
{
	simple si;
	si.getdata(10,20,30);
    si.showdata();
    return 0;
}
