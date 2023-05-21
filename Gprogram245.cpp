#include<iostream>
using namespace std;


int main()
{
    int Input = 0;

    enum Days  { sun,mon , tue ,wed,thus ,fri ,sat};
    enum Days obj;
    obj = tue;
    cout<<obj<<endl;
    cout<<sizeof(obj)<<endl;

    enum Gender {Female = 1 , Male = 2};

    cout<<"Enter your choice\n";
    cout<<"1:Female"<<endl;
    cout<<"2: Male"<<endl;

    cin>>Input;

    switch (Input)
    {
    case Female:
        cout<<"Tax free limit is 3,00,000\n";
        break;

        case Male:
        cout<<"Tax free limit is 50,000\n";
        break;
    
    default:
    cout<<"invalid gender\n";
        break;
    }


    return 0;
}