#include<iostream>
using namespace std;
class Distance
{
		private:
			int f;
			int ic;
			public:
			void getdata()
			{
					cout<<"Enter the distance in Feet->";
					cin>>f;
					cout<<"Enter the distance in inches->";
					cin>>ic;
					
			}
			void putdata()
			{
				cout<<"this Distance feet->"<<f<<endl;
				cout<<"this distance inches->"<<ic<<endl;
			}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	Distance p;
	p.getdata();
	p.putdata();
	return 0;
}

