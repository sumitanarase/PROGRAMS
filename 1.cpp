#include<iostream>
using namespace std;

class Arithematic
{
    public :
        int iNo1;
        int iNo2;

        Arithematic()
        {
            iNo1= 0;
            iNo2= 0;
        }  
        Arithematic(int i , int j)
        {
            iNo1 = i;
            iNo2 = j;
        }      
        int Add()
        {
            int ans = 0;
            ans = iNo1 + iNo2;
            return ans;
        }
};
int main()
{
    Arithematic obj;
    
    int iValue1 = 0,iValue2 =0,iRet =0;

    cout<<"Enter the first Number \n";
    cin>>iValue1;

    cout<<"Enter the second Number \n";
    cin>>iValue2;

    Arithematic obj1(iValue1,iValue2);

    iRet = obj1.Add();

    cout<<iRet;



    return 0;
}