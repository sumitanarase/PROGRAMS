#include<iostream>
using namespace std;


class Demo
{
    public:     // private
        int x;
        int y;

        Demo(int i = 0, int j = 0)
        {
            x = i;
            y = j;
        }
};

bool operator == (Demo op1 ,Demo op2)
{
    if((op1.x == op2.x) && (op1.y == op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator >(Demo op1 ,Demo op2) 
{
     if((op1.x > op2.x) &&(op1.y > op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    Demo obj1(1,20);
    Demo obj2(22,22);

    if(obj1>obj2)
    {
        cout<<"obj1 greater\n";
    }
    else
    {
        cout<<"obj2 id greater\n";
    }


    return 0;
}