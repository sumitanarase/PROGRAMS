#include<iostream>
using namespace std;
float Area(float Radius , float Pie =3.14 )
{
    float iANs =0.0;

    iANs = Pie * Radius * Radius;

    return iANs;


}
int main()
{
    float iNo=0.0;
    float iRet =0.0;

    cout<<"Enter the radius\n";
    cin>>iNo;

    iRet = Area(iNo,2);

    cout<<"ARea of circle is :\n"<<iRet;




    return 0;
}



