#include<iostream>
using namespace std;
class account
{
	public:
		long double ac_no;
		float bal;
		string code;
	void input();
	void display();
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	account a1;
	cout<<"enter the account number-> ";
	cin>>a1.ac_no;
	cout<<"enter the balance->";
	cin>>a1.bal;
	cout<<"enter the branch_code->";
	cin>>a1.code;
	
	cout<<"this account number-> "<<a1.ac_no<<endl;
	cout<<"this account balance-> "<<a1.bal<<endl;
	cout<<"this account Branch code-> "<<a1.code<<endl;
	
	return 0;
	
}
