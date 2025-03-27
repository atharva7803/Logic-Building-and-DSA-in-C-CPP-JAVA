// 2. Write a program which accept string from user and return length of largest word.

// Input: "Marvellous Multi OS Infosystems"
// Ouput: 11



#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int WordCount(char *str){
    int iMax = 0;
    int iCount = 0;

    if(str == NULL){
        return -1;
    }
    
    while(*str != '\0'){
        if(*str != ' '){
            iCount++;
        }
        else{
            if(iCount > iMax){
                iMax = iCount;
            }
            iCount = 0;
        }
        str++;
    }
    if(iCount > iMax){
        iMax = iCount;
    }
    return iMax;
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
        printf("Lenght of largest word in the string is: %d\n", iRet);
    }

    return 0;
} 