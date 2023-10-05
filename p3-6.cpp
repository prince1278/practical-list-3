#include<iostream>
using namespace std;
class Shape
{
	public:
		float base,height;
			void getdata();
			void putdata(); 
};
void Shape::getdata()
{
	cout<<"Enter the height->";
	cin>>height;
	cout<<"Enter the base->";
	cin>>base;
}
void Shape::putdata()
{
	
	cout<<"Shape height->"<<height<<endl;
	cout<< "Shape Base->"<<base<<endl;
	cout<<height<<" x "<<base;
}
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	Shape p;
	p.getdata();
	p.putdata();
	return 0;
}
