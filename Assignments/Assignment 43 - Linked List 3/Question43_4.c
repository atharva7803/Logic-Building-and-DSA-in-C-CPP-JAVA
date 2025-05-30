// 4. Write a program which display smallestdigits of all element from singly linear linked list(Dont Consider 0)

// Function Prototype:
// void DisplaySmall(PNODE Head);

// Input linked list: |11|->|250|->|532|->|415|
// Output: 1    0   2   1


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


void DisplaySmall(PNode First) {
    if (First == NULL) {
        printf("Linked List is empty\n");
        return; 
    }

    while (First != NULL) {
        int num = First->data;
        int iSmall = num;
        int iDigit = 0;
        while (num != 0) {
            iDigit = num % 10;
            if(iDigit < iSmall){
                iSmall = iDigit;
            }
            num /= 10;
        }
        printf("%d\t", iSmall);
        First = First->next;
    }
    printf("\n");
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

    InsertFirst(&head, 415);
    InsertFirst(&head, 532);
    InsertFirst(&head, 250);
    InsertFirst(&head, 11);

    Display(head);

    DisplaySmall(head);

    return 0;
}


