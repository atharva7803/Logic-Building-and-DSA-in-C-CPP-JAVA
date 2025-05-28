// 2. Write a program which display all palindrome element from singly linear linked list

// Function Prototype:
// void DisplayPalindrome(PNODE Head);

// Input linked list: |11|->|28|->|17|->|414|->|6|->|89|
// Output: 11   6   414


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


void DisplayPalindrome(PNode First) {
    if (First == NULL) {
        printf("Linked List is empty\n");
        return; 
    }

    while (First != NULL) {
        int num = First->data;
        int reverse = 0;
        int originalNo = num;

        while (num != 0) {
            reverse = reverse * 10 + (num % 10);
            num /= 10;
        }
        if(originalNo == reverse){
            printf("%d\t", originalNo);
        }

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

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 414);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    Display(head);

    DisplayPalindrome(head);


    return 0;
}


