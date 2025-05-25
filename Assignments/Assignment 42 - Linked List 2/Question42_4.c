// 4 . Write a program which returns second maximum element from singly linear Linked list.

// Function Prototype:
// int SecondMaximum(PNODE Head);

// Input linked list: |110|->|230|->|320|->|240|
// Output: 240

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


int SecondMaximum(PNode First) {
    if (First == NULL || First->next == NULL) {
        printf("List has less than 2 elements.\n");
        return -1; 
    }

    int iMax1 = First->data;
    int iMax2 = -1;

    First = First->next;

    while (First != NULL) {
        if (First->data > iMax1) {
            iMax2 = iMax1;
            iMax1 = First->data;
        } else if (First->data > iMax2 && First->data != iMax1) {
            iMax2 = First->data;
        }
        First = First->next;
    }

    return iMax2;
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

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    Display(head);

    printf("Second Maximum elements is: %d\n", SecondMaximum(head));

    return 0;
}

