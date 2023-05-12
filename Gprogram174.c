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

    newn->next = NULL;
    newn->data = no;

    if(*head == NULL)
    {
        *head =newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
void InsertLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    PNODE temp= NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*head == NULL)
    {
        *head =newn;
    }
    else
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next =  newn;
        
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
    else
    {
        temp =*head;

        while(temp->next->next != NULL)
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next = NULL;

    }
}

void Display(PNODE head)
{
    printf("Elements of Linked list are \n");

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


    while(head != NULL)
    {
        iCnt++;

        head = head->next;
    }
    return iCnt;

}
void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int size =0;
    int iCnt =0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos >(size+1)))
    {
        printf("Invalid position");
        return;
    }
    if(pos==1)
    {
        InsertFirst(head,no);

    }
    else if(pos == size+1)
    {
        InsertLast(head,no);

    }
    else
    {
        temp = *head;
        newn =NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(iCnt =1;iCnt<(pos-1);iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;


    }
}

void DeleteAtPos(PPNODE head ,int pos)
{
    int size =0;
    int iCnt =0;
 PNODE temDel = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos >(size)))
    {
        printf("Invalid position");
        return;
    }
    if(pos==1)
    {
        DeleteFirst(head);

    }
    else if(pos == size)
    {
        DeleteLast(head);

    }
    else
    {
        temp = *head;
       

        for(iCnt =1;iCnt<(pos-1);iCnt++)
        {
            temp = temp->next;
        }
        temDel = temp->next;
        temp->next = temp->next->next;
        free(temDel);
       


    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    DeleteFirst(&first);
    DeleteLast(&first);

    InsertAtPos(&first,15,2);
     InsertAtPos(&first,75,3);

     DeleteAtPos(&first,2);
     DeleteAtPos(&first,3);


    Display(first);

    return 0;
}