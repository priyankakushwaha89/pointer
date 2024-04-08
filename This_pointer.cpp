/*This pointer: this is a keyword that is used when name of instance variable and local variable are same then this key is
applied on instance variable*/

#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		void getdata(int a,int b)
		{
		this->a=a;
		this->b=b;
		}
		void sum()
		{
			int c=a+b;
			cout<<"sum of numbers="<<c<<endl;
		}
};
int main()
{
	A x;
	A *ptr=&x;
	ptr->getdata(20,30);
	(*ptr).sum();// this is the another way of accessing member function but *ptr must be inside parenthesis because "." dot operator have greater precidence than "*";
	
	return 0;
}

