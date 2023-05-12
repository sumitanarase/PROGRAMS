#include<stdio.h>
#include<stdlib.h>

struct  node 
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
    printf("Elements of DLL are :\n");

    while(head != NULL)
    {
        printf("| %d | <=>",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt=0;

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

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

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

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

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
    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next  == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        *head =(*head)->next;
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
    else if((*head)->next  == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;

        while(temp->next->next != NULL)
        {
            temp= temp->next;
        }
        
        free(temp->next);
        temp->next =NULL; 
       
    }
}
void InsertAtPos(PPNODE head ,int no ,int pos)
{

    int size= 0;
    int iCnt =0;
    size = Count(*head);
    PNODE newn = NULL;
    PNODE temp = NULL;


    if((pos <1) || (pos > size+1))
    {
        printf("Invalid Position \n");
        return;
    }
    if(pos ==1)
    {
        InsertFirst(head,no);
    }
    else if(pos == size+1)
    {
        InsertLast(head,no);
    }
    else
    {
        temp = *head;

        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(iCnt = 1; iCnt< pos -1 ;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev=temp;
        temp->next = newn;
        temp->prev = temp;
        
    }
}
void DeleteAtPos(PPNODE head ,int pos)
{

    int size= 0;
    int iCnt =0;
    size = Count(*head);

    
   
    PNODE temp = NULL;


    if((pos <1) || (pos > size))
    {
        printf("Invalid Position \n");
        return;
    }
    if(pos ==1)
    {
        DeleteFirst(head);
    }
    else if(pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        

        for(iCnt = 1; iCnt< pos -1 ;iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

        
        
    }
}
int main()
{
    PNODE first = NULL;
     
     InsertFirst(&first,21);
     InsertFirst(&first,11);

     InsertLast(&first,51);
     InsertLast(&first,101);

     DeleteFirst(&first);
     DeleteLast(&first);

     InsertAtPos(&first,75,2);
     DeleteAtPos(&first,2);

     Display(first);


    return 0;
}