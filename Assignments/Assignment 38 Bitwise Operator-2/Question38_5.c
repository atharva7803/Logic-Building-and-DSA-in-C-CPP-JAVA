// 5. Write a program which accpet one number from user and on its first 4 bits. Return modified number.

// Input : 73
// Output : 79

// 0000     0000    0000    0000    0000    0000    0000    1111
// 0        0       0       0       0       0       0       f

#include<stdio.h>

unsigned int OffBit(unsigned int iNo){
    unsigned int iMask = 0x0000000f; 
    unsigned int iResult = 0;

    iResult = iNo | iMask;

    return iResult; 
}

int main(){
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    iRet = OffBit(iValue);

    printf("Modified number: %u\n", iRet);

    return 0;
}

