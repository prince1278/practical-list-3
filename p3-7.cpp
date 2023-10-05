#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int num;
	public:
		void getdata()
		{
			cout<<"Enter the name->";
			getline(cin,name);
			cout<<"Enter the number->";
			cin>>num;
		}	
		void putdata()
		{
			cout<<"this name is->"<<name<<endl; 
			cout<<"this number is->"<<num;
		}
};
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	employee p;
	p.getdata();
	p.putdata();
	return 0;
}
