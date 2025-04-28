// 1. Write a program which accpet one number from user and off 7th bit of that number if it is on. Return modified number.

// Input : 79
// Output : 15

                                                                 
// 1111    1111    1111    1111    1111    1111    1011    1111    
// f       f       f       f       f       f       b       f
// 0xffffffbf


#include<stdio.h>

unsigned int Off7thBit(unsigned int iNo){
    unsigned int iMask = 0xffffffbf; 
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return iResult; 
}

int main(){
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    iRet = Off7thBit(iValue);

    printf("Modified number: %u\n", iRet);

    return 0;
}







