// perfect number

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

int DisplayPerfect(PNODE first)
{
    int iCount = 0, iSum = 0, i =0;

    while(first != NULL)
    {
        iSum = 0;
        for(i = 1; i < (first->data); i++)
        {
            if((first->data % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == (first->data))
        {
            printf("%d is perfect number\n",first->data);
            iCount++;
        }

        first = first->next;
    }
    return iCount;
    
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

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;
    bool bRet = false;

    InsertFirst(&head,28);
    InsertFirst(&head , 221);
    InsertFirst(&head , 6);
    InsertFirst(&head , 511);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of nodes are : %d\n",iRet);

    iRet = DisplayPerfect(head);
    printf("\nPerfect  elements are : %d\n",iRet);
    

    return 0;
}