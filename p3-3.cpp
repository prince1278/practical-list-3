#include<iostream>
using namespace std;
struct employee
{
	char na[20];
	float co;
	float sa;
	int br;
	public :
	
	int getdata()
	{
		cout<<"enter the name->";
		cin>>na;
		cout<<"enter the code->";
		cin>>co;
		cout<<"enter the salary->";
		cin>>sa;
		cout<<"enter the branch->";
		cin>>br;
	}
	int putdata()
	{
	
	 cout<<"this name is->"<<na<<endl;
	 cout<<"this code is->"<<co<<endl;
	 cout<<"this salary is->"<<sa<<endl;
	 cout<<"this branch is->"<<br<<endl;
	}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
		employee p;
		p. getdata();
		p. putdata();
		
		return 0;
	
}
