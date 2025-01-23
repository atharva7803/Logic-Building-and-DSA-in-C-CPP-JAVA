// 4. Write a program which accept number from user and return multiplication of all digits.

// Input: 2395
// Output: 270

// Input: 1018
// Output: 8

// Input: 9440
// Output: 144

// Input: 922432
// Output: 864

#include<stdio.h>

int  MultDigits(int iNo) {
    int iMul = 1;
    while(iNo > 0){
        int iDigit = iNo % 10;
        if(iDigit == 0){
            iDigit = 1;
        }
        iMul *= iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}

int main() {
    int iValue = 0; int iRet = 0;

    printf("Enter number: "); 
    scanf("%d",&iValue);

    iRet =  MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}
