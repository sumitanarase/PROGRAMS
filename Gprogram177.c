#include<stdio.h>
#include<stdlib.h>

struct  node
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
    newn ->next = NULL;
    newn->data = no;

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
    PNODE newn = NULL;
    PNODE temp =NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    newn ->next = NULL;
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
        
    }

}
void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head ==  NULL)
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

    if(*head ==  NULL)
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
            temp= temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}
void Display(PNODE head)
{
    printf("Elements of LInked LIst are :\n");

    while(head != NULL)
    {
        printf("| %d | ->",head->data);

        head = head->next;
    }
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
void InsertAtPos(PPNODE head ,int no ,int pos)
{
    int size =0;
    int iCnt =0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > size+1))
    {
        printf("Invalid Position");
        return;
    }
    if(pos == 1)
    {
        InsertFirst(head ,no);
    }
    else if((pos == size +1))
    {
        InsertLast(head,no);
    }
    else 
    {
        newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt = 1 ;iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;

        temp->next = newn;

    }
}
void DeleteAtPos(PPNODE head ,int pos)
{
    int size =0;
    int iCnt =0;
    PNODE temp = NULL;
    PNODE Temdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > size))
    {
        printf("Invalid Position");
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if((pos == size ))
    {
        DeleteLast(head);
    }
    else 
    {
        

        temp = *head;

        for(iCnt = 1 ;iCnt<pos-1;iCnt++)
        {
            temp = temp->next;
        }
        Temdelete=temp->next;
        temp->next = temp->next->next;
        free(Temdelete);
        

    }
}
int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,10);

     InsertLast(&first,21);
    InsertLast(&first,51);

     InsertLast(&first,71);
    InsertLast(&first,101);

     InsertLast(&first,121);
    InsertLast(&first,1);

    DeleteFirst(&first);
    DeleteFirst(&first);

    InsertAtPos(&first,2,2);

    DeleteAtPos(&first,2);

    

   


    Display(first);


    return 0;
}