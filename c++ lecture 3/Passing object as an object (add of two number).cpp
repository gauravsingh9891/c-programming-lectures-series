#include<iostream>
using namespace std;
class sample
{
  private:
  	int x;
  public:
   void getdata(int b)
   {
   	 x=b;
	   }
	
	void sum(sample s1,sample s2)
	{
		x=s1.x+s2.x;
		   }   	
		 
	void showdata()
	{
		cout<<"Value of X ="<<x<<endl;
		   }	   
};

int main()
{
	sample A,B,C;
	A.getdata(10);
	B.getdata(20);
	A.showdata();
	B.showdata();
	C.sum(A,B);
	C.showdata();
	return 0;
}
