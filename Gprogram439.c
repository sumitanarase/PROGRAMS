#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE,**PPNODE;

void Display(PNODE head)
{
    printf("Elements of linked list are :\n");

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

void InsertFirst(PPNODE head , int no)
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

void InsertLast(PPNODE head , int no)
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

        temp = *head ; 

        while(temp->next != NULL)
        {
            temp= temp->next;
        }
        temp->next = newn;


    }

}
void InsertAtPos(PPNODE head ,int no , int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt =0;
    int iSize =0;

    iSize = Count(*head);

    if((pos<1)||(pos>(iSize+1)))
    {
        return ;
    }
    if(pos == 1)
    {
        InsertFirst(head ,no);

    }
    else if(pos == (iSize+1))
    {
        InsertLast(head ,no);
    }
    else
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *head;

        for(iCnt = 1 ;iCnt<(pos-1); iCnt++)
        {
            temp =temp->next;
        }
         newn->next = temp->next;
         temp->next->prev = newn;
         temp->next = newn;
         newn->next = temp;

    }
}
void DeleteFirst(PPNODE head)
{

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
       *head =  (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
      
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

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


int main()
{
    PNODE first = NULL;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    InsertAtPos(&first ,75 , 3);

    Display(first);

    return 0;
}