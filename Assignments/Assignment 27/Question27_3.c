// 3. Write a program which accept string from user and accept one character. Return index of first occurence of that character.

// Input: "Marvellous Multi OS"
//        M
// Ouput: 0

// Input: "Marvellous Multi OS"
//        W
// Ouput: -1

// Input: "Marvellous Multi OS"
//        e
// Ouput: 4

#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str, char ch){
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0'){
        if(*str == ch){
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }

    if(bFlag == true){
        return iCnt;
    }
    else{
        return -1;
    }
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
} 