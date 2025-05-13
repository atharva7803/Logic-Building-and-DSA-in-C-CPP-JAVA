// 2. Write a program which accept one number and position from user and off that bit. Return modified number

// Input: 10    2
// Output: 8


#include <stdio.h>

unsigned int OffBit(unsigned int iNo, unsigned int iPos) {
    unsigned int iMask = 1 << (iPos - 1); 

    iMask = ~iMask; 

    return iNo & iMask; 
}

int main() {
    unsigned int iValue = 0;
    unsigned int position = 0;
    unsigned int modifiedValue = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    printf("Enter bit position to turn off (1 to 32): \n");
    scanf("%u", &position);


    modifiedValue = OffBit(iValue, position);

    printf("Modified number after turning off bit at position %u is: %u\n", position, modifiedValue);

    return 0;
}

