// 3. Accept N numbers from user and accept one another number as NO, return index of last occurence of that NO.

// Input: N: 6
// NO : 66
// Eements: 85  66  3  66  93  88
// Output: 1

// Input: N: 6
// NO: 12
// Eements: 85  11  3  15  11  111
// Output: -1


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int LastOcc(int Arr[], int iLength, int iNo) {
    for(int i = iLength; i > 0; i--) {
        if(Arr[i] == iNo) { 
            return i;
        }
    }
    return -1; 
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


    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1){
        printf("There is no such number!");
    } else{
        printf("Last occurence of number is %d!", iRet);
    }

    free(p);

    return 0;
}

