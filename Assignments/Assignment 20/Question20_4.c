// 4. Accept N numbers from user and check whether that numbers contains 11 in it or not.

// Input: N: 6
// Eements: 85  66  3  15  93  88
// Output: 0

// Input: N: 6
// Eements: 85  11  3  15  11  111
// Output: 2


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength) {
    int iCnt = 0; 
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == 11) { 
            iCnt++;
        }
    }
    return iCnt; 
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


    iRet = Frequency(p, iSize);

    printf("%d", iRet);

    free(p);

    return 0;
}

