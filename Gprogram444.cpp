#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


class SinglyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
    
    public:
    SinglyCLL()
    {
        Head = NULL;
        Tail = NULL;
    }


};
int main()
{
    SinglyCLL sobj;


    return 0;
}

