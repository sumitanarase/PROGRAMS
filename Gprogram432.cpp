#include<iostream>
using namespace std;

class Adition
{
    public:
    int i,j;
    
    Adition()
    {
        printf("inside default contructor\n");

        i=0;
        j=0;
    }
    Adition(int A ,int B)
    {
        printf("inside paramerised constructor \n");
        i =A;
        j=B;

    }
    
    int Add()
    {
        int ans =0;

        ans = i+j;

        return ans;
    }
    ~Adition()
    {
        printf("inside destructor\n");
    }
};

int main()
{
    Adition obj;
    int iRet =0;

    int x=0,y=0;

    printf("ENter the Number\n");

    scanf("%d %d",&x , &y);

    Adition obj1(x,y);

    iRet = obj1.Add();

    cout<<iRet;





    return 0;
}