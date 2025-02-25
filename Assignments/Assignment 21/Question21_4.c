// 4. Accept N numbers from user and accept Range, Display all elements from that range.

// Input: N: 6
// Start : 60
// End : 90
// Eements: 85  66  3  76  93  88
// Output: 66   76  88

// Input: N: 6
// Start : 30
// End : 50
// Eements: 85  66  3  76  93  88
// Output: 


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Range(int Arr[], int iLength, int iStart, int iEnd) {
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] >= iStart && Arr[i] <= iEnd) { 
            printf("%d\t", (Arr[i]));
        }
    }
    printf("There is no number present in the given range!\n");
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; 
    int *p = NULL;

    printf("Enter number of elements: "); 
    scanf("%d", &iSize);

    printf("Enter starting point: "); 
    scanf("%d", &iValue1);

    printf("Enter ending point: "); 
    scanf("%d", &iValue2);

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


    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}

