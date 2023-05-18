#include<iostream>
using namespace std;


int main()
{
    typedef int NUMBER;
    typedef char LETTER;

    NUMBER no = 11;
    LETTER ch = 'M';

    cout<<sizeof(no)<<endl;
    cout<<no<<endl;

    cout<<sizeof(ch)<<endl;
    cout<<ch<<endl;

    typedef const int *CPTR;

    CPTR p = &no;

    p= &no;

    cout<<*p;






    return 0;
}