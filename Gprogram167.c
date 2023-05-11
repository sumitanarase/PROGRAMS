#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;          // *
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{
    printf("Data from linked list is : \n");

    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
        head = head->next;
    }
    printf(" NULL\n");
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

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        // *

    if(*head == NULL)       // If LL is empty
    {
           *head = newn;
    }
    else        // LL contains atleast one node
    {
            newn -> next  = *head;
            (*head) -> prev = newn;       // *
            *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        // *

    if(*head == NULL)       // If LL is empty
    {
           *head = newn;
    }
    else        // LL contains atleast one node
    {
        temp =  *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn -> prev = temp;        // *    temp->next->prev = temp;
    }
}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL)
    {
        return;
    }
     
     if((*head)->next == NULL)
     {
        free(*head);
        *head = NULL;
     }
     else
     {
        *head = (*head)->next;
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
     
     if((*head)->next == NULL)
     {
        free(*head);
        *head = NULL;
     }
     else
     {
        temp = *head;

        while(temp ->next->next !=NULL)
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
    int ret = 0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    Display(first);
    ret = Count(first);

    printf("Number of nodes are : %d\n",ret);

   // InsertAtPos(&first,75,3);
    Display(first);

   // DeleteAtPos(&first,3);
    Display(first);

    DeleteFirst(&first);
   // DeleteLast(&first);

   // Display(first);
  //  ret = Count(first);

   // printf("Number of nodes are : %d\n",ret);

    return 0;
}



