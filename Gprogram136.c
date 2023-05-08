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

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn =NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data =no;
    newn->next =NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;

    }

}
void InsertLast(PPNODE head ,int no) // ppnode is used to modify the LL
{
    PNODE newn =NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data =no;
    newn->next =NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {

    }

}
void Display(PNODE head)
{
    printf("Elements from linked list are :\n");

    while(head !=NULL)
    {
        printf("| %d |->",head->data);
       head =head->next;
    }
    printf("NULL\n");

}
int Count(PNODE head)
{
    int iCnt =0;
    while(head !=NULL)
    {
        
        iCnt++;
        head = head->next;
    }
    return iCnt;
}
int main()
{
    PNODE first =NULL;
    int iRet =0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    InsertFirst(&first,1);

    Display(first);
    iRet = Count(first);
    

    printf("Nodes in Link list are :%d\n",iRet);


    return 0;
}