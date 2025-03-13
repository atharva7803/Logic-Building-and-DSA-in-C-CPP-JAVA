// 1. Write a program which accept string from user and copy that contents of that string into another string. (Implement strcpy() function)

// Input: "Marvellous Multi OS"
// Output: "Marvellous Multi OS"


#include<stdio.h>
#include<string.h>

int StrCpyX(char *src, char *dest){
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(){
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s", brr);

    return 0;
} 