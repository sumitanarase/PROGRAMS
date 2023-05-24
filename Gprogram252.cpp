#include<iostream>
using namespace std;

int main()
{
    int no =11;

    int &x= no;

    cout<<x;

    int &y = x;
    cout<<y;

    int * p= &x;

    int A[1]={1};

    int *ptr = NULL;

    int(&b)[0] = A;

    cout<<A[0];




    return 0;
}