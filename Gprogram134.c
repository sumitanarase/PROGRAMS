// Singly Linear Linked list
/*
    InsertFirst
    InsertLast
    InsertAtPosition

    DeleteFirst
    DeleteLast
    DeleteAtPosition

    Display
    Count
*/
#include<stdio.h>
#include<stdlib.h>

// self referencitial structure

struct node
{
    int data;       //4
    struct node *next;      //8 
    
};

typedef struct node NODE;
typedef struct node *PNODE; // structure cha address
typedef struct node **PPNODE;  // pointer cha address

void InsertFirst(PPNODE head,int no)
{
    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then store the address of first node in the next pointer of our new node
    // update the first pointer thruogh head

    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));      // newn = (struct node *)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head == NULL) // LL is empty
    {
        *head = newn;

    }
    else        // LL is contain atleast one node
    {
        newn->next = *head;
        *head = newn;

    }
   
}
void InsertLast(PPNODE head,int no)
{

    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then
    // travel till last node of LL
    // store address of new node in the next pointer of last node

    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));      // newn = (struct node *)malloc(12);

    newn->data=no;
    newn->next=NULL;

    if(*head == NULL) // LL is empty
    {
        *head = newn;

    }
    else        // LL is contain atleast one node
    {
        //code

    }

}
void Display(PNODE head) 
{
    printf("Elements from linked list are :\n");

    while(head != NULL)
    {
        printf("| %d |->",head-> data);
        head = head ->next;
    }
    printf("NULL\n");

}
int Count()
{

}
int main()
{
    PNODE first = NULL;
    int iRet =0;

    InsertFirst(&first,101);    // call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);     // Call by value

   /* iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);*/


    return 0;
}

