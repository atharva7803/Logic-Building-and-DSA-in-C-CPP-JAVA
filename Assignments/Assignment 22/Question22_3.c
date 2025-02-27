// 3. Accept N numbers from user and return the difference between largest and smallest number.

// Input: N: 6
// Eements: 85  66  3   66  93  88
// Output: 90 (93-3)


#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength) {
    int iMax = Arr[0], iMin = Arr[0];
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] > iMax) { 
            iMax = Arr[i];
        } 
        else if(Arr[i] < iMin){
            iMin = Arr[i];
        }
    }
    return iMax - iMin;
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

    iRet = Difference(p, iSize);
    printf("Smallest number is %d", iRet);

    free(p);

    return 0;
}

