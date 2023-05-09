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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn-> next = *head;
        *head = newn;
    }
}
void InsertLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp ->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = newn;

    }
}
void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;

        *head = temp->next;

        free(temp);

    }
}
void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}

void Display(PNODE head)
{
    printf("Elements of Linked List are :\n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int Cout(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head= head->next;
    }
    return iCnt;
}
void InsertAtPos(PPNODE head ,int no ,int pos)
{
    // Consider no of nodes are 4

    // If position is invalid then return directly (< 1  OR > 5)
    // If position is 1 then call insertfirst
    // If position is N+1 then call Insertlast  (position is 5)
     int size = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;
    

     size = Cout(*head);
     if((pos < 1)||(pos>(size+1)))
     {
        printf("Position is Invalid\n");
        return;
     }

     if(pos == 1)
     {
        InsertFirst(head,no);
     }
     else if(pos==(size+1))
     {
        InsertLast(head,no);
     }
     else
     {
        

        
     }

}
int main()
{
    PNODE First =NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,101);


    DeleteFirst(&First);
    DeleteLast(&First);

    Display(First);

    iRet = Cout(First);
    printf("Elements of Linked List are : %d",iRet);



    return 0;
}