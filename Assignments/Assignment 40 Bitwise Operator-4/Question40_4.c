// 4. Write a program which accept one number and position from user and toggle that bit. Return modified number

// Input: 10    3
// Output: 14


#include <stdio.h>

unsigned int ToggleBit(unsigned int iNo, unsigned int iPos) {
    unsigned int iMask = 1 << (iPos - 1); 

    return iNo ^ iMask; 
}

int main() {
    unsigned int iValue = 0;
    unsigned int position = 0;
    unsigned int modifiedValue = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    printf("Enter bit position to turn toggle (1 to 32): \n");
    scanf("%u", &position);


    modifiedValue = ToggleBit(iValue, position);

    printf("Modified number after toggling bit at position %u is: %u\n", position, modifiedValue);

    return 0;
}

