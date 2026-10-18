// Addition of all even elements

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

int AddEven(PNODE first)
{
   int iSumEven = 0;

   while(first != NULL)
   {
       if(((first->data) % 2) == 0)
       {
            iSumEven = iSumEven + (first->data);
       }
       first = first->next;
   }

   return iSumEven;
    
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

    iRet = AddEven(head);

    printf("Addition of all even elements are : %d\n",iRet);
   
    return 0;
}