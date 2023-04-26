#include<iostream>
using namespace std;

class Addition
{
    public:
      int iNo1;
      int iNo2;

    Addition()
    {
        iNo1;
        iNo2;
    }
    Addition(int A , int b)
    {
        iNo1 = A ;
        iNo2 = b;

    }
    ~Addition()
    {
        cout<<"Inside destrcutior";
    }  
     int Add()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }  
};
int main()
{
    Addition obj;
    int iRet =0;
    int iValue1=0;
    int iValue2=0;

    cout<<"Enter the first Number :\n";
    cin>>iValue1;

    cout<<"Enter the Second Number :\n";
    cin>>iValue2;

     Addition obj1;
     Addition obj2(iValue1,iValue2);

     iRet =obj2.Add();

     cout<<"Addition is "<<iRet;


    return 0;
}