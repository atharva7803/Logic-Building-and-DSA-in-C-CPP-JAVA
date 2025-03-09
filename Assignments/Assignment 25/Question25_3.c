// 3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital character.

// Input: "MarvellouS"
// Ouput: 6     (8-2)

#include<stdio.h>
#include<string.h>

int Difference(char *str){
    int iCntC = 0, iCntS = 0;
    while(*str != '\0'){
        if((*str >= 'A') && (*str <= 'Z')){
            iCntC++;
        }
        if((*str >= 'a') && (*str <= 'z')){
            iCntS++;
        }
        str++;
    }
    return iCntS - iCntC;
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
} 