// 5. Write a program which display addition of digits of element from songly linear linked list

// Function Prototype:
// int SumDigit(PNODE Head);

// Input linked list: |110|->|230|->|20|->|240|->|640|
// Output: 2    5   2   6   10

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


int SumDigit(PNode First) {
    if (First == NULL) {
        printf("Linked List is empty\n");
        return 0; 
    }
    
    int totalSum = 0;

    printf("Sum of digits of elements are: ");
    while (First != NULL) {
        int num = First->data;
        int digitSum = 0;

        while (num != 0) {
            digitSum += num % 10;
            num /= 10;
        }

        printf("%d ", digitSum);
        totalSum += digitSum;

        First = First->next;
    }
    printf("\n");

    return totalSum;
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

    InsertFirst(&head, 640);
    InsertFirst(&head, 240);
    InsertFirst(&head, 20);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    Display(head);

    printf("Addition of digits of element is: %d\n", SumDigit(head));

    return 0;
}

