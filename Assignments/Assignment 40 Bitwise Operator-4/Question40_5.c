// 5. Write a program which accept one number from user and toggle contents of first and last nibble of that number. Return modified number. (Nibble is a group of four bits)


#include <stdio.h>

unsigned int ToggleBit(unsigned int iNo) {
    unsigned int firstNibbleMask = 0x0000000f; 
    unsigned int lastNibbleMask = 0xf0000000; 

    iNo = iNo ^ firstNibbleMask; 
    iNo = iNo ^ lastNibbleMask;  

    return iNo;
}

int main() {
    unsigned int iValue = 0;
    unsigned int modifiedValue = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    modifiedValue = ToggleBit(iValue);

    printf("Modified number after toggling first and last nibbles is: %u\n", modifiedValue);

    return 0;
}
