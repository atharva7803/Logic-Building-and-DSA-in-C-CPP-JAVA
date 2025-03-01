// 5. Accept N numbers from user and display summation of digits of each number.

// Input: N: 6
// Eements: 8225    665  3   76  953 858
// Output: 17   17  3   13  17  21


#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength) {
    for(int i = 0; i < iLength; i++){
        int iNo = Arr[i];
        int iSum = 0, iDigit = 0;
        
        while(iNo != 0) {
            iDigit = iNo % 10;
            iSum += iDigit;
            iNo /= 10;
        }
        printf("%d\t", iSum);
    }
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0,iValue = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}

