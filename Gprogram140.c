#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head ,int No)
{

    PNODE newn= NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = No;
    newn ->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn ->next = *head;
        *head = newn;
    }
}
void InsertLast(PPNODE head ,int No)
{

    PNODE newn= NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = No;
    newn ->next = NULL;

    if(*head == NULL)       // if LL is empty 
    {
        *head = newn;
    }
    else              // LL contains atleast one node
    {
        // travel till last node
        // store address of new node in the next pointer of last node
        
            
    }
}
void Display(PNODE head)
{
    printf("Elements of linked list are :\n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head ->next;
    }
    printf("NULL\n");
}

int Count (PNODE head)
{
    int iCnt =0;

    while(head != NULL)
    {
        iCnt++;
        head = head ->next;
    }
   return iCnt;
}


int main()
{
    PNODE F =NULL;
    int iRet = 0;


    InsertFirst(&F,11);
    InsertFirst(&F,21);
    InsertFirst(&F,51);
    InsertFirst(&F,101);

    InsertLast(&F,12);

    Display(F);

    iRet = Count(F);
    printf("Nodes present in LL are : %d",iRet);

    return 0;
}