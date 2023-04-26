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

void InsertLast(PPNODE head ,int no)
{
    PNODE temp = NULL;
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
    PNODE temp=NULL;

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
    PNODE temp=NULL;

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
        free(temp->next);
        temp->next = NULL;
    }
}
void Display(PNODE head)
{
    printf("Elements pf linked list are\n");

    while(head != NULL)
    {
        printf("| %d|->",head->data);
        head = head->next;
    }
    printf("NULL");
}
int Count(PNODE head)
{
    
    int i =0;
    while(head != NULL)
    {
        i++;
        

        head = head->next;
    }
    return i;

}
int main()
{
    int iRet =0;
    PNODE first = NULL;

    InsertFirst(&first ,21);

    InsertFirst(&first ,11);

    InsertLast(&first,51);
    InsertLast(&first,101);


    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Elements of present are : %d ",iRet);


    return 0;
}