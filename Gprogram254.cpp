#include<iostream>

using namespace std;



int main()
{
    int Arr[5]={10,20,30,40,20};

    int *p = NULL;

    p = new int [5];

    if(p== NULL)
    {
        cout<<"unable to allocate the memory\n";
    }
    else
    {
        cout<<"memory gets allocated successfully\n";

    }

    delete [] p;


    return 0;
}