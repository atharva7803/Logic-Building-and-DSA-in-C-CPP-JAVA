// 1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.

// Input: "Marvellous Python"
// Ouput: "nohtyp suollevraM"


#include<stdio.h>
#include<string.h>

int StrCpyRev(char *src, char *dest){
    int length = strlen(src);  
    for(int i = length - 1; i >= 0; i--){
        *dest = src[i];
        dest++;
    }
    *dest = '\0';
}

int main(){
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s", brr);

    return 0;
} 