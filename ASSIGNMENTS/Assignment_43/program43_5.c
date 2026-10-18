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

void SumDigits(PNODE first)
{
   

   while(first != NULL)
   {
    int iRem = 0, iSum = 0;
        while((first->data) != 0)
        {
            iRem = (first->data) %10;
            iSum = iSum + iRem;
            (first->data) = (first->data)/10;
        }
        printf("%d\t",iSum);
        first = first->next;
   }
    
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

    InsertFirst(&head,10);
    InsertFirst(&head ,23);
    InsertFirst(&head ,12);
    InsertFirst(&head ,31);

    Display(head);

    SumDigits(head);
   
    return 0;
}