// Addition of elements in singly linear linked list 

#include<stdio.h>
#include<stdlib.h>

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

int Addition(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount = iCount +(first->data); 
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

    InsertFirst(&head,101);
    InsertFirst(&head , 21);
    InsertFirst(&head , 21);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of nodes are : %d\n",iRet);

    iRet = Addition(head);

    if(iRet == 0)
    {
        printf("\nThere is no element in linked list\n");
    }
    else
    {
        printf("\nAddition of elements is : %d\n",iRet);
    }

    return 0;
}