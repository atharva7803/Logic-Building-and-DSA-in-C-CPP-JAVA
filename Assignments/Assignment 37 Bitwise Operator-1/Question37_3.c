// 3. Write a program which checks whether 7th,15th,21st and 28th bit is On or Off.

//                                                                  
// 0000     1000    0001    0000    0100    0000    0100    0000
// 0        8       1       0       4       0       4       0
// 0x08104040

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo){
    unsigned int iMask = 0x08104040;
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
        printf("7th,15h,21st and 28th bit is On\n");
    } else{
        printf("7th,15h,21st and 28th bit is Off\n");
    }   
    return 0;
}