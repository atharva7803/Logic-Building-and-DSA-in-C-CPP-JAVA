// 1. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII(){
    int i = 0;
    printf("ASCII Table:\n");
    printf("Character\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------------------\n");

    for(i = 0; i <= 255; i++) {
        printf("%c\t\t%d\t%02x\t%03o\n", i, i, i, i);
    }
}

int main(){
    DisplayASCII();

    return 0;
}