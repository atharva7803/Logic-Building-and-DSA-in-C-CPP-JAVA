// Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

// Input: 10    15      (1010   1111)
// Output: 2    4


#include<stdio.h>

void CommonBits(unsigned int iNo1, unsigned int iNo2){
    unsigned int iCommon = iNo1 & iNo2; 
    unsigned int iPos = 1; 
    unsigned int iBitMask = 1; 

    printf("Position of common ON bits: ");
    while(iCommon > 0){
        if(iCommon & iBitMask){ 
            printf("%u ", iPos); 
        }
        iCommon = iCommon >> 1; 
        iPos++; 
    }
    printf("\n");
}

int main(){
    unsigned int iValue1 = 0;
    unsigned int iValue2 = 0;
    unsigned int iRet = 0;

    printf("Enter First number: \n");
    scanf("%u", &iValue1);

    printf("Enter Second number: \n");
    scanf("%u", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}
