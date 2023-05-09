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

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));                                                                                                      

    newn->data=no;
    newn->next=NULL;

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

void InsertLast(PPNODE head ,int no)
{

    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then
    // travel till last node of LL
    // store address of new node in the next pointer of last node

    PNODE newn = NULL;
    PNODE temp =NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*head == NULL)
    {
        *head = newn;
    }

    else        // if LL is not empty then
    {

        // travel till last node
        // store address of new node in the next pointer of last node
       
        
       
    }
}

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
    int iCnt =0;

    while(head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;

}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,101);    // call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet); 

    return 0;
}
