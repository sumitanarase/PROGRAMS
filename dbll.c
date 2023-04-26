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

void  Display(PNODE head)
{
    printf("Nodes of Linked list are :\n");

    while(head != NULL)
    {
        printf("| %d | <=>",head->data);
        head = head->next;
    }
    printf("NULL\n");

}
int Count(PNODE head)
{
    int iCnt = 0;

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

void InsertLast(PPNODE head ,int no)
{
        PNODE newn = NULL;
          PNODE temp = NULL;
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
        temp = *head;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = newn;
        newn->prev = temp;

    }

}


int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,10);
    InsertFirst(&First,9);

   InsertLast(&First,21);
   InsertLast(&First,51);

    Display(First);


    return 0;
}