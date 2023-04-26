#include<iostream>
using namespace std;

int main()
{
    int iNo =11;
    int *p = &iNo;

    int Arr[4]= {11,21,51,101};

    int (&brr)[4]= Arr;

    cout<<&brr;

    int *(&q) = p;

    int &x =iNo;
    int &y = iNo;

   // cout<<*q;

    return 0;
}