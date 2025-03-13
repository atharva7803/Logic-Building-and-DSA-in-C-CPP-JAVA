// 4. Write a program which accept string from user and accept one character. Return index of last occurence of that character.

// Input: "Marvellous Multi OS"
//        M
// Ouput: 11

// Input: "Marvellous Multi OS"
//        W
// Ouput: -1

// Input: "Marvellous Multi OS"
//        e
// Ouput: 4

#include<stdio.h>
#include<stdbool.h>

int LastChar(char *str, char ch){
    int iCnt = 0;
    int lastIndex = -1;
    while(*str != '\0'){
        if(*str == ch){
            lastIndex = iCnt;
        }
        iCnt++;
        str++;
    }
    return lastIndex;
}

int main(){
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    getchar();

    printf("Enter the character: ");
    scanf("%c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
} 