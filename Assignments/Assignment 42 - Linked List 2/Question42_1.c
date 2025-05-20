// 1 . Write a program which displays all elements which are perfect from singly linked list.

// Function Prototype:
// int DisplayPerfect(PNODE Head);

// Input linked list: |11|->|28|->|17|->|41|->|6|->|89|
// Output: 6    28

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


int DisplayPerfect(PNode First) {
    int perfectCount = 0;
    printf("Perfect numbers in the list are: \n");
    
    while (First != NULL) {
        int num = First->data;
        int sum = 0;

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i; 
            }
        }

        if (sum == num && num != 0) {
            printf("%d\n", num);
            perfectCount++;
        }
        
        First = First->next;
    }
    return perfectCount;
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

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    Display(head);

    int perfectCount = DisplayPerfect(head);
    printf("Number of perfect numbers are: %d\n", perfectCount);

    return 0;
}

