#include <iostream>
using namespace std;

class Max{
	private:
		int no1,no2;
	public:
		int largest()
		{
			if(no1>no2)
			{
				return no1;
			}
			else
			{
				return no2;
			}
		}
		void input()
		{
			cout<<"enter the number is->";
			cin>>no1;
			cout<<"enter the number is->";
			cin>>no2;
		}
		void display()
		{
			int max=largest();
			cout<<"Max :: "<<max;
		}
};
int main()
{
		cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	Max m;
	m.input();
	m.display();
}
