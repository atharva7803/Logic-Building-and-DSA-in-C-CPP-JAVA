// Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is On are Off.

// Input: 10    3   7
// Output: True


#include<stdio.h>
#include<stdbool.h>


bool CheckBit(int iNo, int pos1, int pos2) {
    unsigned int iMask1 = 1 << (pos1 - 1); 
    unsigned int iMask2 = 1 << (pos2 - 1);

    if((iNo & iMask1) != 0 || (iNo & iMask2) != 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    unsigned int iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    printf("Enter first position: \n");
    scanf("%d", &iPos1);

    printf("Enter second position: \n");
    scanf("%d", &iPos2);

    bRet = CheckBit(iValue, iPos1, iPos2);

    if(bRet == true) {
        printf("Either bit at position %d or position %d is On\n", iPos1, iPos2);
    } 
    else {
        printf("Both bits at position %d and position %d are Off\n", iPos1, iPos2);
    }

    return 0;
}
