#include<iostream>
using namespace std;
class  sample
{
	private:
		int x,y;
	public:
	    void getdata(int a,int b)
		{
			x=a;
			y=b;
			}	
	void showdata();		
};

void sample::showdata()
{
	cout<<"Value of X ="<<x<<endl;
	cout<<"Value of Y ="<<y<<endl;
}
 
 int main()
 {
 	sample obj;
 		obj.getdata(10,20);
 		obj.showdata();
   return 0;
 }
