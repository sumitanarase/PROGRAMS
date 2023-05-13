#include<iostream>
using namespace std;

class Display
{
    public:
    int iNo;

    Display()
    {
        iNo =0;
    }
    Display(int A)
    {
        iNo = A;
    }
    ~Display()
    {
        cout<<"DEsctructor";

    }

    int D()
    {

        int iCnt =0;
        int isum=0;

        for(iCnt =1 ;iCnt< iNo;iCnt++)
        {
            if(iNo % iCnt==0)
            {
                isum++;
            }
        }
        return isum++;
    }
    

};
int main()
{
    Display obj;

    int iValue=0;
    int iret =0;

    cout<<"Enter the NUmber :\n";
    cin>>iValue;

    Display obj1();
    Display obj2(iValue);

    iret =obj2.D();

    cout<<"is :"<<iret;


    return 0;

}