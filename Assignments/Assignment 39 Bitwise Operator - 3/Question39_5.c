 // Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

// Input: 897   9   13
// Toggle all bits from postion 9 to 13 of input number i.e 879


#include <stdio.h>

unsigned int ToggleBitRange(unsigned int iNo, int pos1, int pos2) {
    unsigned int iMask1 = 1 << (pos1 - 1); 
    unsigned int iMask2 = 1 << (pos2 - 1); 
    unsigned int iResult = iNo;

    for (int i = pos1; i <= pos2; ++i) {
        unsigned int iMask = 1 << (i - 1); 
        iResult = iResult ^ iMask; 
    }

    return iResult;
}

int main() {
    unsigned int iValue = 0;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter number: ");
    scanf("%u", &iValue);

    printf("Enter first position: ");
    scanf("%d", &iPos1);

    printf("Enter second position: ");
    scanf("%d", &iPos2);

    // Ensure iPos1 is less than or equal to iPos2
    if (iPos1 > iPos2) {
        int temp = iPos1;
        iPos1 = iPos2;
        iPos2 = temp;
    }

    unsigned int iResult = ToggleBitRange(iValue, iPos1, iPos2);

    printf("Modified number after toggling bits from position %d to %d: %u\n", iPos1, iPos2, iResult);

    return 0;
}
