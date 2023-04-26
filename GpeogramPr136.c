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

void Insertfirst(PPNODE head ,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data =no;
    newn ->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}
void Insertlast(PPNODE head ,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data =no;
    newn ->next = NULL;

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
    printf("Elemnets in linked list are :\n");

    while(head !=NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt=0;
    printf("Elemnets in linked list are :\n");

    while(head !=NULL)
    {
      iCnt++;
        head = head->next;
    }
   return iCnt;
}


int main()
{
    PNODE first = NULL;
    int iRet =0;

    Insertfirst(&first,101);
    Insertfirst(&first,51);
    Insertfirst(&first,21);
    Insertfirst(&first,11);

    Display(first);
    iRet =  Count(first);
    printf("Nodes in linked list are :%d",iRet);


    return 0;
}
