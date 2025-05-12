// 1. Write a program which accept one number and position from user and check whether bit at that position is on or of. If bit is one return TRUE otherwise return FALSE.

// Input: 10    2
// Output: TRUE


#include<stdio.h>
#include<stdbool.h>

bool ChkBits(unsigned int iNo1, unsigned int iNo2){
    unsigned int iMask = 1 << (iNo2 - 1);

    unsigned int iResult = iNo1 & iMask;

    if(iResult == iMask) {
        return true; 
    } else {
        return false;
    }
}

int main(){
    unsigned int iValue = 0;
    unsigned int position = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    printf("Enter bit position to check (1 to 32): \n");
    scanf("%u", &position);

    bRet = ChkBits(iValue, position);

    if(bRet == true) {
        printf("Bit at position %u is ON\n", position);
    } else {
        printf("Bit at position %u is OFF\n", position);
    }

    return 0;
}
