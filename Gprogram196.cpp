#include<iostream>
using namespace std;

void Call_Value(int no )
{
    no++;

}
void Call_Address(int *p)
{
    (*p)++;
}
void Call_Reference(int &ref)
{
    ref++;
}
int main()
{
    int a= 10,b=10,c=10;

    Call_Value(a);
    cout<<a<<endl;

    Call_Address(&b);
    cout<<b<<endl;


    Call_Reference(c);
    cout<<c<<endl;


    return 0;
}