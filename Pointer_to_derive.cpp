//pointer to derived class :A pointer to derived class is refers to pointer that points to an object of a derived class;

#include<iostream>
using namespace std;
class Area
{
 int r;
  public:
  void getdata()
  {
  	cout<<"enter the radius of a circle="<<endl;
  	cin>>r;
  }
  void area()
  {
  	float a;
  	a=3.14*r*r;
  	cout<<"area of circle="<<a<<endl;
  }
};
class Area1: public Area
{
	int l,b;
	public: 
      void getdata1()
      {
      	cout<<"enter the length and breadth of rectangle="<<endl;
      	cin>>l>>b;
	  }
	  void area()
	  {
	  	int A=l*b;
	  	cout<<"area of rectangle="<<A<<endl;
	  }
};
int main()
{
	Area obj;
	Area *ptr;
	
	Area1 obj1;
	ptr=&obj1;

	ptr->getdata();
	ptr->area();
	
	return 0;
}
