#include<iostream>
using namespace std;
class Max
{
        private:
                int x,y,z;
    public:
        void getdata()
        {
                cout<<"enter the number->";
                cin>>x;
                cout<<"enter the number->";
                cin>>y;
                cout<<"enter the number->";
                cin>>z;
                
        }
        void putdata()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
                cout<<"this maximum number->"<<r;
        }
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
        Max p;
        p.getdata();
        p.putdata();
        
}
