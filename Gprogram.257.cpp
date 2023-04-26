#include<iostream>
using namespace std;

float Area(float radius = 0.0 , float pie = 3.14)
{
    float ans = 0.0;
    ans = radius *radius * pie;

    return ans;
}

int main()
{
    int iValue1 =0, iValue2;
    int iRet =0;

    cout<<"Enter the radius \n";
    cin>>iValue1;

    cout<<"Enter the pie\n";
    cin>>iValue2;

    iRet = Area(iValue1);

    cout<<"Arrea is :"<<iRet;


    return 0;
}