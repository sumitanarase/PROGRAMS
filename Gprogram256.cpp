#include<iostream>

using namespace std;

void Call_value(int no)
{
    no++;

}

void Call_Address(int *p)
{
    (*p)++;
}
void Call_refernce(int &ref)
{
    ref++;

}

int main()
{
    int a =10, b =20 ,c = 30;

    Call_Address(&b);

    cout<<b<<endl;

    Call_value(a);
    cout<<a<<endl;
    Call_refernce(c);
    cout<<c<<endl;


    return 0;
}