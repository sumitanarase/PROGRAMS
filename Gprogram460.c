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
    int i =0;

      while(head != NULL)
      {
        i++;
        head = head->next;
        
      }
      return i;
}
    
void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head =  newn;
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head =  newn;
    }
    else
    {
        temp =*head;

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
    else if((*head)->next == NULL)
    {
     free(*head);
     *head = NULL;
        
    }
    else
    {
        temp = *head;

        while (temp->next->next != NULL)
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next = NULL;
        
    }
}
void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int iSize =0;
    int iCnt =0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    iSize = Count(*head);

    if((pos <1)||(pos> iSize+1))
    {
        return;
    }
    if(pos==1)
    {
        InsertFirst(head,no);
    }
    else if(pos==iSize+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;

        temp = *head;

        for(iCnt =1 ; iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;


    }

}
void DeleteAtPos(PPNODE head ,int pos)
{
     int iSize =0;
    int iCnt =0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    PNODE temdel = NULL;

    iSize = Count(*head);

    if((pos <1)||(pos> iSize))
    {
        return;
    }
    if(pos==1)
    {
        DeleteFirst(head);
    }
    else if(pos==iSize)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(iCnt = 1 ; iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        temdel = temp->next;
        temp->next=temp->next->next;
        free(temdel);

    }

}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,21); 
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    DeleteLast(&first);


    Display(first);

    return 0;
}