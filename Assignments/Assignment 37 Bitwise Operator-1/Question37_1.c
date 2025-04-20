// 1. Write a program which checks whether 15th bit is On or Off.

#include<stdio.h>
#include<stdbool.h>


bool Check15Bit(int iNo){
    unsigned int iMask = 16384;
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

    bRet = Check15Bit(iValue);

    if(bRet == true){
        printf("15th bit is On\n");
    } else{
        printf("15th bit is Off\n");
    }   

    return 0;
}