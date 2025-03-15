// 4. Write a program which accept string from user and concat second string after first string. 

// Input: "Marvellous Infosystems"
//        "Logic Building"

// Output: "Marvellous Infosystems Logic Building"


#include<stdio.h>
#include<string.h>

int StrCatX(char *src, char *dest){
    while(*dest != '\0'){
        dest++;
    }
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(){
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s", brr);

    return 0;
} 