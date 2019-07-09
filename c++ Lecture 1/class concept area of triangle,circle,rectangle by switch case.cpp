#include<iostream>
#include<stdio.h>
using namespace std;
class area
{
	private:
		float r,ba,h,l,b;
	public:
	void circle()
	{
		cout<<"enter the radius of circle =";
		cin>>r;
		cout<<"The area of circle is ="<<3.14*r*r<<endl;
		}	
		
	void triangle()
	{
		cout<<"enter the Base and Height =";
		cin>>ba>>h;
		cout<<"The area of triangle is ="<<0.5*ba*h<<endl;
		}	
	
	void rectangle()
	{
		cout<<"enter the length and breath =";
		cin>>l>>b;
		cout<<"The area of Rectangle is="<<l*b<<endl;
		}		
};

int main()
{
	area ar;
	int n;
	cout<<"\t\t Main Menu\n\n";
	cout<<"Press 1: For Area of Circle\n";
	cout<<"Press 2: For Area of Triangle\n";
	cout<<"Press 3: For Area of Rectangle\n";
	cin>>n;
	switch(n)
	{
		case 1: ar.circle();
		        break;
		case 2: ar.triangle();
		        break;
		case 3: ar.rectangle();	
		        break;
		case 4: exit;
		default: cout<<"Invalid Entery\n";			       
	}
	return 0;
}
