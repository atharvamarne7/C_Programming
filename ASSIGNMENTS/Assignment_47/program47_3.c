// Calculate and display sum of digits for each node

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

void SumDigits(PNODE first)
{   
    printf("Sum of digits of each node:\n");
    printf("--------------------------------\n");

    while (first != NULL)
    {
        int iSum = 0;
        int iNum = first->data;
        int temp = iNum;

        if(temp == 0)
        {
            iSum = 0;
        }
        else
        {
            while(temp != 0)
            {
                int iRem = temp % 10;
                iSum = iSum + iRem;
                temp = temp/10;
            }

        }
        printf("| %-5d | -> %d digits\n", iNum, iSum);
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
    InsertFirst(&head, 20);
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

    SumDigits(head);

    return 0;
}
