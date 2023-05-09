#include<iostream>
using namespace std;

class Arithmatic
{
    public :
        int iNo1;
        int iNo2;   //characteristics

Arithmatic()    // constructor
{
    cout<<"Deafault constructor\n";
    iNo1 = 0;
    iNo2 = 0;
}
 Arithmatic(int A, int B)   // Parametrised Constructor
    {
        cout<<"Inside parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }
     ~Arithmatic()  // Destructor
    {
        cout<<"Inside Destructor\n";
    }
int Addition()
{
     int iAns =0;

    iAns = iNo1 +iNo2;

    return iAns;
}

int Sub()
{
     int iAns = 0;

    iAns = iNo1 - iNo2;

    return iAns;
}
};
int main()
{
    Arithmatic obj;
    int iValue1=0,iValue2=0,iRet=0;

    cout<<"Enter the First Number\n";
    cin>>iValue1;

    cout<<"Enter the second Number\n";
    cin>>iValue2;

     Arithmatic obj1;
     Arithmatic obj2(iValue1 , iValue2);

     iRet = obj2.Addition();
     cout<<"Addition is :"<<iRet<<"\n";

     iRet = obj2.Sub();
     cout<<"Addition is :"<<iRet<<"\n";



    return 0;
}