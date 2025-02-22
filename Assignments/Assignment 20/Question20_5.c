// 5. Accept N numbers from user and accept one another number as NO, return frequency of NO form it.

// Input: N: 6
// NO : 66
// Eements: 85  66  3  66  93  88
// Output: 2

// Input: N: 6
// NO: 12
// Eements: 85  11  3  15  11  111
// Output: 0


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo) {
    int iCnt = 0; 
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == iNo) { 
            iCnt++;
        }
    }
    return iCnt; 
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0; 
    int *p = NULL;

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


    iRet = Frequency(p, iSize, iValue);

    printf("%d", iRet);

    free(p);

    return 0;
}

