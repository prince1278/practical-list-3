#include <iostream>
using namespace std;

class item{
	private:
		int number;
		float cost;
	public:
		
		void displaydata()
		{
			cout<<"enter the number is->"<<number<<endl;
			cout<<"enter the cost is-> "<<cost;
		}
		void getdata();
};

void item::getdata()
		{
			cout<<"enter the number-> ";
			cin>>number;
			cout<<"enter the cost-> ";
			cin>>cost;
		}
		
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	item i;
	i.getdata();
	i.displaydata();
	
}
