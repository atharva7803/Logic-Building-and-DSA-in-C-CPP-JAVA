// 3 . Write a program which returns addition of all even elements from singly linked list.

// Function Prototype:
// int AdditionEven(PNODE Head);

// Input linked list: |11|->|20|->|32|->|41|
// Output: 52

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *PNode, **PPNode;


void InsertFirst(PPNode First, int no) {
    PNode newn = (PNode)malloc(sizeof(Node));
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
        int num = First->data;
        if (num % 2 == 0) {
            iSum += num;
        }
        First = First -> next;
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



int main() {
    PNode head = NULL;

    InsertFirst(&head, 41);
    InsertFirst(&head, 32);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    Display(head);

    printf("Addition of all even elements is: %d\n", Addition(head));

    return 0;
}

