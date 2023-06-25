#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo1;
    int iNo2;
    
    int Addition(int no1 ,int no2)
    {
        return no1+no2;
    }
        int Addition(int no1 ,int no2 ,int no3)
    {
        return no1+no2+no3;
    }
        int Addition(int no1 ,int no2 ,int no3,int no4)
    {
        return no1+no2+no3+no4;
    }
};
int main()
{
    Demo obj;
    int i =0;

    Demo obj1;
    i= obj1.Addition(11,21);


    return 0;
}