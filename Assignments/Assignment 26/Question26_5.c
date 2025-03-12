// 5. Write a program which accept string from user and count number of white spaces.

// Input: "MarvellouS"
// Ouput: 0

// Input: "MarvellouS Infosystems"
// Ouput: 1

// Input: "MarvellouS Infosystems by Piyush Manohar Khairnnar"
// Ouput: 5

#include<stdio.h>
#include<string.h>

int CountWhite(char *str){
    int iCnt = 0;
    while(*str != '\0'){
        if(*str == ' '){
            iCnt++;
        }
        *str++;
    }
    return iCnt;
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
} 