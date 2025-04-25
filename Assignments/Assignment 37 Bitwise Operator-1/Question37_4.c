// 4. Write a program which checks whether 7th,8th, and 9th bit is On or Off.

//                                                                  
// 0000     0000    0000    0000    0000    0001    1100    0000
// 0        0       0       0       0       1       c       0
// 0x000001c0

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo){
    unsigned int iMask = 0x000001c0;
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
        printf("7th,8th and 9th bit is On\n");
    } else{
        printf("7th,8th and 9th bit is Off\n");
    }   
    return 0;
}