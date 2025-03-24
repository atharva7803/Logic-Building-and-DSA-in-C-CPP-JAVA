// 2. Write a program which accept 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function).

// Input: "Marvellous Infosystems"
//        "Logic Building"
//        5

// Ouput: "Marvellous Infosystems Logic"


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool StrCmpX(char *src, char *dest){
    while((*src != '\0') && (*dest != '\0')){      
        if(*src != *dest){
            break;
        }
        src++;
        dest++;
    }
    if((*src == '\0') || (*dest == '\0')){
        return true;
    } else{
        return false;
    }
}

int main(){
    bool bRet = true;
    char arr[50] = "Marvellous Infosystems";
    char brr[50] = "Marvellous Infosystems";

    bRet = StrCmpX(arr,brr);

    if(bRet == true){
        printf("Both strings are equal!");
    } else{
        printf("Both strings are not equal!");
    }

    return 0;
} 