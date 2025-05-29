// 3. Write a program which display product of all digits of all element from singly linear linked list(Dont Consider 0)

// Function Prototype:
// void DisplayProduct(PNODE Head);

// Input linked list: |11|->|20|->|32|->|41|
// Output: 1    2   6   4


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


void DisplayProduct(PNode First) {
    if (First == NULL) {
        printf("Linked List is empty\n");
        return; 
    }

    while (First != NULL) {
        int num = First->data;
        int iMul = 1;
        int iDigit = 0;
        while (num != 0) {
            iDigit = num % 10;
            if(iDigit == 0){
                iDigit = 1;
            }
            iMul = iMul * iDigit;
            num /= 10;
        }
        printf("%d\t", iMul);
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

    InsertFirst(&head, 41);
    InsertFirst(&head, 32);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    Display(head);

    DisplayProduct(head);

    return 0;
}


