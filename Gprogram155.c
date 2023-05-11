#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE head)
{
    printf("");
    while(head != NULL)
    {
        printf("%d\t",head->data);
        head = head->next;
    }

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
    PNODE Temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data= no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*head ==NULL)
    {
        *head = newn;
    }
    else
    {
       // Temp = *head;
        newn->next = *head;
        (*head)->prev = newn;

        *head= newn;
    }
}
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    Display(First);

    return 0;
}