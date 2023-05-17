#include<iostream>

using namespace std;

class Employee
{
    public:
    int x,y;

    virtual void Desgnitation()
    {
        cout<<"Choose 1] Teamlead\n 2] Manger\n 3] Developer\n";
    }

};
class Teamlead: public Employee
{

};
class Manger : public Employee
{

};

class Developer : public Employee
{

};

int main()
{

    return 0;
}