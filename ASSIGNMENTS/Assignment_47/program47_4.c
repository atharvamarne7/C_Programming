// Display prime

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Insert node at beginning
void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
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
    printf("Prime numbers in LL are :\n");
    printf("--------------------------------\n");

    while (first != NULL)
    {
        int iNum = first->data;
        int temp = iNum;
        int iCount = 0;
        
        for(int iCnt = 2; iCnt < iNum; iCnt++ )
        {
            if(iNum % iCnt == 0)
            {
                iCount++;
            }
        }

        if(iCount == 0)
        {
            printf("%d\t",iNum);
        }
        first = first->next;
    }
}

// Display linked list
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

// Count total nodes
int Count(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
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

    // Insert elements (some negative)
    InsertFirst(&head, 51);
    InsertFirst(&head, 7);
    InsertFirst(&head, 511);
    InsertFirst(&head, 50);
    InsertFirst(&head, 222);
    InsertFirst(&head, 11);
    InsertFirst(&head, 24);

    printf("Linked list elements:\n");
    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);
    printf("-------------------------------------\n");

    DisplayPrime(head);

    return 0;
}
