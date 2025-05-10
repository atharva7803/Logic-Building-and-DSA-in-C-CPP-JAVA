// Write a program which checks whether 9th and 12th bit is On or Off.

// Input: 257
// Output: True

// 0000     0000    0000    0000    0000    1001    0000    0000
// 0        0       0       0       0       9       0       0
// 0x00000900

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo){
    unsigned int iMask = 0x00000900;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask){
        return true;
    } else{
        return false;
    }
}


int main(){
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    bRet = CheckBit(iValue);

    if(bRet == true){
        printf("9th and 12th bit is On\n");
    } else{
        printf("9th and 12th bit is Off\n");
    }   
    return 0;
}