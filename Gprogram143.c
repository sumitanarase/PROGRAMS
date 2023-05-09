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

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
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

void Display(PNODE head)
{
    printf("Elemmts of Linked List are :\n");

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
void DeleteFirst(PPNODE head)
{
    // If LL is empty then return
    // If LL contains atleast one node then
    // Store the address of second node in the first pointer through head
    // And delete the fisrt node
    PNODE temp = NULL;

    if(*head == NULL)  // LL is Empty
    {
        return ;
    }
    else
    {
        temp = *head;

        *head = temp->next;

        free(temp);

    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);
    InsertFirst(&First,1);
    InsertFirst(&First,1);
    Display(First);


    InsertLast(&First,21);
    
    InsertLast(&First,51);
    
    InsertLast(&First,101);
    DeleteFirst(&First);
    Display(First);

    iRet = Count(First);
    printf("Nodes are in Linked list are: %d",iRet);

    return 0;
}