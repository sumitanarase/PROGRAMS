#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;

};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE head)
{
    printf("Elemements of Doubly linked list are :\n");
    while(head != NULL)
    {
        printf("| %d|<=>",head->data);
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
void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertLast(&first,21);

    Display(first);

    return 0;
}