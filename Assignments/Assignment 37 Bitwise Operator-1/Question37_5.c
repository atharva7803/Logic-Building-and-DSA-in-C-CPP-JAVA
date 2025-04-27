// 5. Write a program which checks whether 1st and last bit is On or Off. First bit number 1 and last bit means bit number 32

//                                                                  
// 1000     0000    0000    0000    0000    0000    0000    0001
// 8        0       0       0       0       0       0       1
// 0x80000001

#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo){
    unsigned int iMask = 0x80000001;
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
        printf("1st and last bit is On\n");
    } else{
        printf("1st and last bit is Off\n");
    }   
    return 0;
}