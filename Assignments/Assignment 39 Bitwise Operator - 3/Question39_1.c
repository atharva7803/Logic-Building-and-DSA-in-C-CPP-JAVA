// Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

// Input: 11
// Output: 3


#include<stdio.h>

unsigned int CountOne(unsigned int iNo){
    unsigned int iCnt = 0;

    while(iNo > 0){
        if(iNo & 1){
            iCnt++;
        }
        iNo = iNo >> 1;
    } 
    return iCnt;
}

int main(){
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits are: %u\n", iRet);

    return 0;
}
