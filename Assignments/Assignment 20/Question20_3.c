// 3. Accept N numbers from user and check whether that numbers contains 11 in it or not.

// Input: N: 6
// Eements: 85  66  11  80  93  88
// Output: 11 is present

// Input: N: 6
// Eements: 85  66  3  80  93  88
// Output: 11 is absent


#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength) {
    int iCntE = 0, iCntO = 0; 
    bool bFlag = false;
    for(int i = 0; i < iLength; i++) {
        if(Arr[i] == 11) { 
            bFlag = true;
            break;
        }
    }
    return bFlag; 
}

int main() {
    int iSize = 0, iRet = 0, iCnt = 0; 
    int *p = NULL;
    bool bRet = false;

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

    bRet = Check(p, iSize);

    if(bRet == true){
        printf("11 is present!");
    } else{
        printf("11 is absent!");
    }

    free(p);

    return 0;
}

