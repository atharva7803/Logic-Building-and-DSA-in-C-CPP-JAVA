// 5. Accept N numbers from user and return product of all odd elements.

// Input: N: 6
// Eements: 15  66  3   70  10  88
// Output: 45

// Input: N: 6
// Eements: 44  66  72  70  10  88
// Output: 0


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Product(int Arr[], int iLength) {
    int iMul = 1;
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] % 2 != 0) { 
            iMul *= Arr[i];
        }
        else{
            iMul = 0;
        }
    }
    return iMul;
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; 
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

    iRet = Product(p, iSize);
    printf("Product is %d", iRet);

    free(p);

    return 0;
}

