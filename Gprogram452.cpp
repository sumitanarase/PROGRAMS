#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;

    private:
    int j;

    protected:
    int k;

    Demo(int a=11,int b=21,int c =51)
    {
        this->i =a;
        this->j = b;
        this->k = c;
    }
    friend void gun();

};
void gun()
{
    Demo obj;

    cout<<obj.i;
    cout<<obj.k;

}
int main()
{
    gun();

    return 0;
}