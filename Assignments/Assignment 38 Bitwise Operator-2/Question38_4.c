// 4. Write a program which accpet one number from user and toggle 7th bit and 10th bit of that number. Return modified number.

// Input : 137
// Output : 713

// 0000     0000    0000    0000    0000    0010    0100    0000
// 0        0       0       0       0       2       4       0

#include<stdio.h>

unsigned int OffBit(unsigned int iNo){
    unsigned int iMask = 0x00000240; 
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

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

