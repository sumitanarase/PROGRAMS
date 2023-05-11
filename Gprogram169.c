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
    printf("Elements of Linked List are :\n");

    while(head != NULL)
    {
        printf("| %d |<=>",head->data);
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
void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;
    newn->prev = NULL;

    if(*head != NULL)
    {
          newn->next = *head;
        (*head)->prev = newn;
        
    }
    *head = newn;

}
void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;
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
            temp = temp->next;

        }
        temp->next = newn;

        newn->prev = temp;

    }
}
void DeleteFirst(PPNODE head)
{
    if(*head== NULL)
    {
        return;
    }
    
    if((*head)->next  == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {

    }
}
int main()
{
   

     PNODE first = NULL;
    int ret = 0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

      InsertLast(&first,51);
    InsertLast(&first,101);
   

    Display(first);
    ret = Count(first);

    printf("Number of nodes are : %d\n",ret);

    
    return 0;
}