// Second Max number 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int SecondMax(PNODE first)
{
   int iMax1 = 0,iMax2 = 0;

   if(first == NULL)
   {
    return -1;
   }

   while(first != NULL)
   {
       if((first->data) > iMax1)
       {
        iMax2 = iMax1;
        iMax1 = first->data;
       }
       else if(((first->data) > iMax2) && (first->data) != iMax1)
       {
        iMax2 = first->data;
       }
       
       first = first->next;
   }

   return iMax2;
    
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}


int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head ,23);
    InsertFirst(&head ,12);
    InsertFirst(&head ,31);

    Display(head);

    iRet = SecondMax(head);

    printf("Second max number of all elements is : %d\n",iRet);
   
    return 0;
}