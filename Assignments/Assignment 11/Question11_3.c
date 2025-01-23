// 3. Write a program which accept number from user and return the count of digits in between 3 and 7.

// Input:2395
// Output: 1

// Input: 1018
// Output: 0

// Input: 4521
// Output: 2

// Input: 9922
// Output: 0

#include<stdio.h>

int  CountRange(int iNo) {
    int iCount = 0;

    while(iNo > 0){
        int iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7 ){
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main() {
    int iValue = 0; int iRet = 0;

    printf("Enter number: "); 
    scanf("%d",&iValue);

    iRet =  CountRange(iValue);

    printf("%d", iRet);

    return 0;
}
