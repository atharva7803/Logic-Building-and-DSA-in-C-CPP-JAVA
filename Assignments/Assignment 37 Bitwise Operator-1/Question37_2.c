// 2. Write a program which checks whether 5th and 8th bit is On or Off.


// 0000     0000    0000    0010    0000    0000    0001    0000
// 0        0       0       2       0       0       1       0
// 0x00020010

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo){
    unsigned int iMask = 0x00020010;
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
        printf("5th and 18th bit is On\n");
    } else{
        printf("5th and 18th bit is Off\n");
    }   
    return 0;
}