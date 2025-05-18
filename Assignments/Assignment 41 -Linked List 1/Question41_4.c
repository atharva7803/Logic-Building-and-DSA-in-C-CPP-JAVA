// 4. Write a program which returns largest element form singly linear linked list.

// Function Prototype:
// int Maximum(PNODE Head);

// Input linked list: |110|->|230|->|320|->|240|
// Output: 320

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



int Maximum(PNode First) {     
    int iMax = 0;
    while (First != NULL) {
        if(iMax < First -> data){
            iMax = First -> data;
        }
        First = First->next;
    }
    return iMax;  
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

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    Display(head);


    iRet = Maximum(head);
    printf("Maximum element is: %d\n", iRet);

    return 0;
}
