// 2 . Write a program which displays all elements which are perfect from singly linked list.

// Function Prototype:
// int DisplayPrime(PNODE Head);

// Input linked list: |11|->|20|->|17|->|41|->|22|->|89|
// Output: 11   17  41  89

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


int DisplayPrime(PNode First) {
    int primeCount = 0;
    printf("Prime numbers in the list are: \n");
    
    while (First != NULL) {
        int num = First->data;
        int prime = 1;

        if(num <= 1){
            prime = 0;
        }
        else{
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    prime = 0;      // it means divisor found, not a prime no
                    break;
                }
            }
        }
        if(prime){
            printf("%d ", num);
            primeCount++;
        }

        First = First->next;
    }
    printf("\n");
    return primeCount;
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

    int primeCount = DisplayPrime(head);
    printf("Number of prime numbers are: %d\n", primeCount);

    return 0;
}

