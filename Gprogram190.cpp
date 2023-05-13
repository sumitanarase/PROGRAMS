#include<iostream>

using namespace std;

class Demo
{
    public:
    int X;
    int Y;

    Demo()
    {
        cout<<"Inside default constructor\n";
        X=0;
        Y=0;

    }
    Demo(int i,int j)
    {
        cout<<"inside parameterised constructor\n";
        X=i;
        Y =j;

    }
    Demo(Demo &ref)
    {
        cout<<"inside copy constructor\n";
        X=ref.X;
        Y= ref.Y;
        cout<<X<<endl;

    }
    ~Demo()
    {
        cout<<"inside destructor\n";

    }
    
};
int main()
{
    cout<<"Inside main\n";

   
    Demo obj2(11,21);

    Demo obj3(obj2);
   


    cout<<"End of main\n";
    return 0;
}