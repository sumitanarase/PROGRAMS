#include<iostream>
using namespace std;

class Addition
{
    public:
    int iNo1;
    int iNo2;

    Addition()
    {
        cout<<"Default constructor"<<endl;
        iNo1=0;
        iNo2=0;
    }

    Addition(int i ,int j)
    {
        cout<<"inside parametrised constructor"<<endl;
        iNo1 =i;
        iNo2 =j;
    }
    Addition(Addition &ref)
    {
        cout<<"inside copy costructor"<<endl;
        iNo1 = ref.iNo1;
        iNo2 = ref.iNo2;
    }

    int  Add()
    {
        int ans =0;

        ans = iNo1+iNo2;

        return ans;
    }

    ~Addition()
    {
        cout<<"inside destructor"<<endl;
    }


};

int main()
{
    Addition obj;

    int iValue1 =0;
    int iValue2=0;
    int iRet =0;

    cout<<"Enter the first elements\n";
    cin>>iValue1;

    cout<<"Enter the 2nd elements\n";
    cin>>iValue2;

    Addition obj2;

    Addition obj3(iValue1 , iValue2);

    iRet = obj3.Add();

    cout<<iRet;


    


    return 0;
}