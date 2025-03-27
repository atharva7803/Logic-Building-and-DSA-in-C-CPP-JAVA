// 1. Write a program which accept string from user count number of words from string.

// Input: "Marvellous Multi OS"
// Ouput: 3

// Input: "     Marvellous Multi    OS  Pune"
// Ouput: 4


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int WordCount(char *str){
    int iCnt = 0;   
    bool inWord = false;

    if (str == NULL) {
        return -1;
    }

    while (*str != '\0') {
        if (*str == ' ' || *str == '\t') {
            inWord = false; 
        } 
        else {
            if (!inWord) {
                iCnt++;
                inWord = true; 
            }
        }
        str++;
    }
    
    return iCnt;
}

int main(){
    char arr[30];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s", arr);

    iRet = WordCount(arr);

    if (iRet == -1) {
        printf("Invalid input!\n");
    } else {
        printf("Number of words in the string: %d\n", iRet);
    }

    return 0;
} 