// 1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

// Input: N: 6

// Eements: 85 66  3   80  93  88

// Output: 53 (234-181)


#include<stdio.h>
#include<stdlib.h> 

int Difference(int Arr[], int iLength) {
    int iSumEven = 0, iSumOdd = 0, iDiff = 0;
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] % 2 == 0) {
            iSumEven += Arr[i];
        } else {
            iSumOdd += Arr[i];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main() {
    int iSize = 0, iRet = 0; 
    int *p = NULL;

    printf("Enter number of elements: "); 
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL) {
        printf("Unable to allocate memory\n"); 
        return -1;
    }

    printf("Enter %d elements:- \n", iSize); 
    for(int iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt + 1); 
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}
