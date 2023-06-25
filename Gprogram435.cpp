#include<iostream>
using namespace std;

void call_value(int iNo)
{
    iNo++;
}
void Call_Address(int *p)
{
    (*p)++;
}
void Call_ref(int &ref )
{
    ref++;
}
int main()
{
    int a =10,b=20,c=30;

    call_value(a);
    cout<<a<<endl;

    Call_Address(&b);
    cout<<b<<endl;

    Call_ref(c);
    cout<<c<<endl;






    return 0;
}