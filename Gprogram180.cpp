#include<iostream>
using namespace std;

class Arithematic
{

    public:
    int iNo1;
    int iNo2;

    Arithematic()
    {
         iNo1 = 0;
         iNo2 =0;
    }
    Arithematic(int A,  int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    ~Arithematic()
    {
        cout<<"Default constructor";

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
    Arithematic obj;
    int iRet = 0;


    int iValue1 =0;
    int iValue2=0;

    cout<<"Enter the first NUmber";
    cin>>iValue1;

    cout<<"Enter the second Number";
    cin>>iValue2;

    Arithematic obj1;

   Arithematic obj2(iValue1,iValue2);

   iRet = obj2.Addition();

   cout<<"add is :"<<iRet<<"\n";

    return 0;
}