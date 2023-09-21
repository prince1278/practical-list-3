 #include<iostream>
 using namespace std;
 class student
{
	char na[20];
	float age;
	public:
	int getdata()
	{
		cout<<"enter the name->";
		cin>>na;
		cout<<"enter the age->";
		cin>>age;	
	}	
	int putdata()
	{
		cout<<"name of member  is->"<<na<<endl;
		cout<<"age of member is->"<<age<<endl;
	
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

