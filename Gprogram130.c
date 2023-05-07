#include<stdio.h>
#include<stdlib.h>
//structure declaration

struct node
{
   int data;
   struct node *next;
};

int main()
{
    struct node obj; // static memory allocation

    struct node *ptr = (struct node*)malloc(sizeof(struct node));// dynamic memory allocation


    obj.data=0;   // direct accesing 
    obj.next =NULL;  

    ptr->data=0; //indirect accessing
    ptr->next=NULL;

    return 0;
}