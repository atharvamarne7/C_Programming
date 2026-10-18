// prime number

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

void DisplayPrime(PNODE first)
{
   while(first != NULL)
   {
       int iCnt = 0,iCount = 0;
       for(iCnt = 2; iCnt < first->data; iCnt++)
       {
            if(((first->data) % iCnt) == 0)
            {
                iCount++;
            }
       }

       if(iCount == 0)
       {
            printf("%d\t", first-> data);
       }
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

    InsertFirst(&head,89);
    InsertFirst(&head ,22);
    InsertFirst(&head ,7);
    InsertFirst(&head ,511);

    Display(head);

    DisplayPrime(head);
  
    
    return 0;
}