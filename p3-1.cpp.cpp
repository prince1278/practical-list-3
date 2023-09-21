#include<iostream>
using namespace std;
class student
{
	char name[20];
	float pr;
	int std;
	public:
	int getdata()
	{
		cout<<"enter the memeber name->";
		cin>>name;
		cout<<"enter the percentage->";
		cin>>pr;	
		cout<<"Enter the standasrd->";
		cin>>std;
	}	
	int putdata()
	{
		cout<<" this member name is->"<<name<<endl;
		cout<<"this percentage is ->"<<pr<<endl;
		cout<<"this standard is   ->"<<std<<endl;
	}
};
	int main()
	{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	student p;
	p.getdata();
	p.putdata();
	
	return 0;
}
