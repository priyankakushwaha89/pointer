//pointer to object

#include<iostream>
using namespace std;

class product
{
	int qty;
	float p;
	public:
		void getdata()
		{
			cout<<"enter the quantity of product"<<endl;
			cin>>qty;
			cout<<"enter the price of the product"<<endl;
			cin>>p;
		}
		void show()
		{
			cout<<"quantity="<<qty<<"    "<<"price="<<p<<endl;
		}
};
int main()
{
	product x;
	product *ptr=&x;
	
	ptr->getdata();
	ptr->show();

	return 0;
}
