#include<iostream>
using namespace std;

int main()
{
    int Choice= 0;
    enum Marvellous_Batch {PPA = 1 ,LB =2,Python =3};
    const int Fees[] = {15000,16000,17000};
    const int Duration[] = {3,4,5};

    cout<<"Select the batch that you want to join\n";
    cout<<"1 : PPA\n";
    cout<<"2: LB\n";
    cout<<"3 : Python\n";

    cin>>Choice;

    switch (Choice)
    {
    case PPA:
         cout<<"Thank you for selecting Pre-Plcament activity batch\n";
         cout<<"Duration is :"<<Duration[PPA]<<endl;
         cout<<" Fees Is :"<<Fees[PPA]<<endl;
        break;

         case LB:
         cout<<"Thank you for selecting LB\n";
         cout<<"Duration is :"<<Duration[LB]<<endl;
         cout<<" Fees Is :"<<Fees[LB]<<endl;
        break;
         case Python:
         cout<<"Thank you for selecting Pyhton batch\n";
         cout<<"Duration is :"<<Duration[Python]<<"months"<<endl;
         cout<<" Fees Is :"<<Fees[Python];
        break;
    
    default:
    cout<<"Sorry there is no such batch\n";
            cout<<"Contact Admin : 7020713938\n";
            break;
    
        break;
    }

cout<<"Thank you for visiting the marvellous\n";

    return 0;
}