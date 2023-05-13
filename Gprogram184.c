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
void InsertLast(PPNODE head , int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next =NULL;

    if(*head == NULL)
    {
        *head = newn;
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

void Deletefirst(PPNODE head)
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
    PNODE td = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
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
        td = temp->next;
        temp->next = temp->next->next;
        free(td);

    }
}

void Display(PNODE head)
{
    printf("Elements of linked list are :\n");

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
    int isize =0;
    isize = Count(*head);
    PNODE newn= NULL;
    PNODE temp = NULL;
    int iCnt =0;

    if((pos <1) || (pos > isize+1))
    {
        printf("invalid position:");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == isize+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = NULL;
        newn= (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt =1; iCnt<pos -1 ;iCnt++)
        {
            temp = temp->next;
        }
        newn->next =temp->next;
        temp->next = newn;

    }
}
void DeleteAtPos(PPNODE head ,int pos)
{
    int isize =0;
    isize = Count(*head);

    PNODE temp = NULL;
    PNODE tf = NULL;
    int iCnt =0;

    if((pos <1) || (pos > isize))
    {
        printf("invalid position:");
        return;
    }
    if(pos == 1)
    {
         Deletefirst(head);
    }
    else if(pos == isize)
    {
        DeleteLast(head);
    }
    else
    {
        

        temp = *head;

        for(iCnt =1; iCnt<pos -1 ;iCnt++)
        {
            temp = temp->next;
        }
        tf = temp->next;
        temp->next = temp->next->next;
        free(tf);


    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first ,11);
    InsertFirst(&first ,21);

    InsertLast(&first,51);
     InsertLast(&first,101);

     Deletefirst(&first);

     DeleteLast(&first);

     InsertAtPos(&first , 75 ,2);

     DeleteAtPos(&first,2);
    Display(first);

    return 0;
}