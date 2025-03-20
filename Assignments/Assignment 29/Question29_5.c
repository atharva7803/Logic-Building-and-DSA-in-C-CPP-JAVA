// 3. Write a program which accept string from user and copy that characters of that string into another string by toggling the case.

// Input: "Marvellous Python 2"
// Ouput: "mARVELLOUS pYTHON 2"


#include<stdio.h>
#include<string.h>

int StrCpyToggle(char *src, char *dest){
    while(*src != '\0') {
        if(*src >= 'A' && *src <= 'Z') {
            *dest = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z') {
            *dest = *src - 32;
        }
        else{
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(){
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s", brr);

    return 0;
} 