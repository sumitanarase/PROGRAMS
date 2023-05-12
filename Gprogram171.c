#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE head)
{
    printf("Elements of LInked List Are :\n");
    
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
void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data  = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next =  *head;
        *head =  newn;
    }
}
void InsertLast(PPNODE head ,int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data  = no;
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
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp =  *head;

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
    else if((*head)->next  != NULL)
    {
        
        *head =  NULL;
       
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
void InsertAtPos(PPNODE head ,int no,int pos)
{
    int size =0;
    int iCnt =0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    size=Count(*head);

    if((pos<1)||(pos>size+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == size+1)
    {
        InsertLast(head,no);
    }
    else
    {
        temp = *head ;
        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for(iCnt =1;iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,21);

    InsertLast(&first,51);
      InsertLast(&first,101);

      DeleteFirst(&first);
      DeleteLast(&first);
      InsertAtPos(&first,75,3);

    Display(first);


    return 0;
}