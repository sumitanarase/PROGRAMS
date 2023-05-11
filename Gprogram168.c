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

    newn->data = no;
    newn->next = NULL;

    if(*head ==NULL)
    {
        *head =newn;
    }
    else
    {
        newn ->next = *head;
        *head = newn;
    }
}
void InsertLast(PPNODE head ,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head ==NULL)
    {
        *head =newn;
    }
    else
    {
        temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
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
    if((*head)->next == NULL)
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
        temp->next = NULL;


    }
}
void Display(PNODE head)
{
    printf("Elements of Linked List are :\n");

    while(head != NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}
int Count(PNODE head)
{
    int iCnt =0;

    while(head != NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}
void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int isize =0;
    isize = Count(*head);
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt =0;

    if((pos < 1)||(pos >isize+1))
    {
        printf("Invalid pos ");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == isize+1 )
    {
        InsertLast(head,no);
    }
    else
    {
        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        temp = *head;
        for(iCnt =1 ;iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp ->next;
        temp->next = newn;

        
    }
}
void DeleteAtPos(PPNODE head ,int pos)
{
    int isize =0;
    isize = Count(*head);
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE tempdel = NULL;
    int iCnt =0;

    if((pos < 1)||(pos >isize))
    {
        printf("Invalid pos ");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == isize )
    {
        DeleteLast(head);
    }
    else
    {
        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

       // newn->data = no;
        newn->next = NULL;
        temp = *head;
        for(iCnt =1 ;iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        tempdel = temp ->next;
        temp->next = temp->next->next;
        free(tempdel);

        
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertLast(&first,21);

    DeleteLast(&first);

    Display(first);

    

    return 0;
}