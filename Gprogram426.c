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

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

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
void InsertLast(PPNODE head , int no)
{
    PNODE newn = NULL;
    PNODE Temp = NULL; 

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {

        Temp = *head;
        

        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp ->next = newn;

    }

}



void Display(PNODE head)
{
    printf("Elements of linked list are");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int Count(PNODE head)
{
    int iCnt =0;
    printf("nodes present in ll\n");

    while(head != NULL)
    {
        iCnt++;
        head= head->next;

    }
    return iCnt;
}
int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);

    InsertLast(&first,11);
    InsertLast(&first,21);


    

    Display(first);

    iRet  = Count(first);

    printf("%d",iRet);


    return 0;
}