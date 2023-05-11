// we are going to compare singly vs double and make their chnges as *

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  //*
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void  Display(PNODE head)
{
    printf("Nodes of Linked list are :\n");

    while(head != NULL)
    {
        printf("| %d | <=>",head->data);
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

void InsertFirst(PPNODE head ,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next =NULL;
    newn->prev = NULL;          //*
 
    if(*head != NULL)       // LL contains atleast one node
    {
        newn->next = *head;
        (*head)->prev = newn;               //*
    }
    *head = newn;
}

void InsertLast(PPNODE head ,int no)
{
      PNODE newn = NULL;
      PNODE temp = NULL;
     newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next =NULL;
    newn->prev = NULL;          //*

    if(*head == NULL)       // if LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
        temp = *head;

        while(temp ->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE head )
{}

void DeleteLast(PPNODE head )
{}
void InsertAtPos(PPNODE head ,int no ,int pos)
{

}
void DeleteAtPos(PPNODE head ,int pos)
{
    
}
int main()
{

    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertLast(&first,51);
    InsertLast(&first,101);

    Display(first);

    iRet= Count(first);
    printf("Number of nodes present in : %d",iRet);


    return 0;
}