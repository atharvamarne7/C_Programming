// smallest of all elements in singly linear linked list 

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

int Minimum(PNODE first)
{
    int iMin = (first)->data;

    while(first != NULL)
    {
       if((first->data) < iMin)
       {
            iMin = first->data;
       }
       first = first->next;
    }
    
    return iMin;
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

    InsertFirst(&head,1001);
    InsertFirst(&head , 221);
    InsertFirst(&head , 321);
    InsertFirst(&head , 511);

    Display(head);

    iRet = Count(head);
    printf("\nNumber of nodes are : %d\n",iRet);

    iRet = Minimum(head);
    printf("\nMinimum of all elements is : %d\n",iRet);
    

    return 0;
}