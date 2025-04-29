// 2. Write a program which accpet one number from user and off 7th bit and 10th bit of that number. Return modified number.

// Input : 577
// Output : 1

                                                                 
// 1111    1111    1111    1111    1111    1101    1011    1111    
// f       f       f       f       f       d       b       f
// 0xfffffdbf


#include<stdio.h>

unsigned int OffBit(unsigned int iNo){
    unsigned int iMask = 0xfffffdbf; 
    unsigned int iResult = 0;

    iResult = iNo & iMask;

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







