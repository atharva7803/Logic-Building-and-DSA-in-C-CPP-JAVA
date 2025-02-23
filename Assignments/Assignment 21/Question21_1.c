// 1. Accept N numbers from user and accept one another number as NO, check whether NO is present or not.

// Input: N: 6
// NO : 66
// Eements: 85  66  3  66  93  88
// Output: true

// Input: N: 6
// NO: 12
// Eements: 85  11  3  15  11  111
// Output: false


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength, int iNo) {
    bool bFlag = false; 
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == iNo) { 
            bFlag = true;
            break;
        }
    }
    return bFlag; 
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0; 
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements: "); 
    scanf("%d", &iSize);

    printf("Enter number NO: "); 
    scanf("%d", &iValue);

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


    bRet = Check(p, iSize, iValue);

    if(bRet == true){
        printf("Number is present!");
    } else{
        printf("Number is not present!");
    }

    free(p);

    return 0;
}

