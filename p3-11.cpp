#include <iostream>
using namespace std;
class product{
	private:
		int product_id,unit_price;
		string product_name;
	public:
		void getData()
		{
			cout<<"enter the product ID -> ";
			cin>>product_id;
			cout<<"enter the product name -> ";
			cin>>product_name;           
			cout<<"enter the product unit price -> ";
			cin>>unit_price;
			cout<<endl;
		}
		void putData()
		{
			cout<<"this ID is->"<<product_id<< endl;
			cout<<"this name is->"<<product_name<<endl;
			cout<<"this price is->"<<unit_price<<endl<<endl;
		}
};

int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	product p1,p2;
	p1.getData();
	p2.getData();
	
	p1.putData();
	p2.putData();
}
