#include<iostream>
using namespace std;
class math
{
	private:
	float a,b,c,d,e,n;
	public:
	void getdata(float l,float m,float u,float o, float p)
	{
		a=l;
		b=m;
		c=u;
		d=o;
		e=p;
		n=(a+b+c+d+e)/5;
		}	
	void showdata();	
};
void math::showdata()
{
	cout<<"The Average of five no. is ="<<n;
}

int main()
{
	math avg;
	avg.getdata(10,15,100,99,98);
	avg.showdata();
	return 0;
}
