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

void InsertFirst(PPNODE head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;

    if(*head==NULL)
    {
        *head = newn;

    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
void InsertLast(PPNODE head,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;

    if(*head==NULL)
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
        temp->next =newn;
       
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

         *head =temp->next;
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
    printf("Elemsnts of Linked list are :\n");
    while(head != NULL)
    {
        printf("| %d |->",head->data);
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
void InsertAtPos(PPNODE head ,int no,int pos)
{
    int iSize=0;
    int iCnt =0;
    PNODE newn = NULL;
    PNODE temp = NULL;
     
     iSize = Count(*head);

     if((pos < 1)||(pos > iSize+1))
     {
        printf("Invalid Postion");
        return;
     }
     if(pos== 1)
     {
        InsertFirst(head ,no);

     }
     else if(pos > iSize+1)
     {
        InsertLast(head,no);
     }
     else
     {
        
         newn = NULL;

         newn = (PNODE)malloc(sizeof(NODE));

          newn->data=no;
          newn->next = NULL;
          
          temp = *head;

          for(iCnt =1; iCnt< pos-1;iCnt++)
          {
            temp = temp->next;
          }
          newn->next =temp->next;
          temp->next = newn;

        
     } 
}
void DeleteAtPos(PPNODE head ,int pos)
{
     // Consider no of nodes are 4

    // If position is invalid then return directly (< 1  OR > 4)
    // If position is 1 then call deletefirst
    // If position is N then call deletelast  (position is 4)

     int size = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else        // Logic
    {
        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ; iCnt++)
        {
            temp = temp -> next;
        }

        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }
}
int main()
{
     PNODE First = NULL;

     InsertFirst(&First,11);
     InsertFirst(&First,21);
     
     InsertFirst(&First,21);
     InsertFirst(&First,21);
    
     InsertAtPos(&First,55,3);
     DeleteAtPos(&First,3);

   
     Display(First);

    return 0;
}