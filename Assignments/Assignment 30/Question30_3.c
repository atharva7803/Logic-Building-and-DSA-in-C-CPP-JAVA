// 3. Write a program which accept 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function).

// Input: "Marvellous Infosystems"
//        "Marvellous Logic Building"
//        10

// Ouput: true


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool StrCmpX(char *src, char *dest, int iCnt){
    while(iCnt > 0 && *src != '\0' && *dest != '\0'){    
        if(*src != *dest){
            return false;
        }  
        dest++;
        src++;
        iCnt--;
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
    char brr[50] = "Marvellous Logic Building";

    bRet = StrCmpX(arr,brr,10);

    if(bRet == true){
        printf("Both strings are equal!");
    } else{
        printf("Both strings are not equal!");
    }

    return 0;
} 