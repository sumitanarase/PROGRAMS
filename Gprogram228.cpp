#include<iostream>
using namespace std;

int main()
{

    struct Demo
    {
        /* data */
        int no1;
        int no2;
    };

    typedef struct Demo Demo;
    typedef struct Demo *PDEMO;
    typedef struct Demo **PPNODE;

    typedef struct Demo
    {
        int data;
        int no2;
    }Demo,*PDEMO,**PPNODE;
    


    return 0;
}