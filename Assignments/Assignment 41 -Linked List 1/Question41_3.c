// 3. Write a program which returns addition of all element from singly linear linked list.

// Function Prototype:
// int Addition(PNODE Head);

// Input linked list: |10|->|20|->|30|->|40|
// Output: 100

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



int Addition(PNode First) {     
    int iSum = 0;
    while (First != NULL) {
        iSum += First -> data;
        First = First->next;
    }
    return iSum;  
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

    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    Display(head);


    iRet = Addition(head);
    printf("Addition of all elements is: %d\n", iRet);

    return 0;
}
