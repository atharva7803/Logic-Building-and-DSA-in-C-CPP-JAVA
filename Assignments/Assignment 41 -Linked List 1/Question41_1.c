// 1. Write a program which search first occurrence of particular element from singly linear linked list.
// Function should return position at which element is found.

// Function Prototype:
// int SearchFirstOcc(PNODE Head, Int no);

// Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element: 30
// Output: 3

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *PNode, **PPNode;


void InsertFirst(PPNode First, int no) {    
    PNode newn = NULL;
    newn = (PNode)malloc(sizeof(Node));
    newn->data = no;
    newn->next = NULL;

    if (*First == NULL) {
        *First = newn;
    } else {
        newn->next = *First;
        *First = newn;
    }
}



int SearchFirstOcc(PNode First, int no) {     
    int iPos = 1;
    while (First != NULL) {
        if (First->data == no) {
            return iPos;
        }
        First = First->next;
        iPos++;
    }
    return -1;  
}


void Display(PNode First) {     
    while (First != NULL) {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}



int CountNode(PNode First) {    
    int iCnt = 0;
    while (First != NULL) {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}


int main() {
    PNode head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);

    printf("Enter element to find its position: ");
    scanf("%d", &iValue);

    iRet = SearchFirstOcc(head, iValue);
    if (iRet != -1) {
        printf("First Occurence of Element found at position: %d\n", iRet);
    } else {
        printf("Element not found in the list.\n");
    }

    return 0;
}
