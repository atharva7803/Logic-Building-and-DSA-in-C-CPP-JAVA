// 1. Write a program which accept 2 strings from user and concat N characters of second string after first string. Value N should be accepted from user. (Implement strncat() function).

// Note: If third parameter is greater than the size of second string then concat whole string after first string.

// Input: "Marvellous Infosystems"
//        "Logic Building"
//        5

// Ouput: "Marvellous Infosystems Logic"


#include<stdio.h>
#include<string.h>

int StrNCatX(char *src, char *dest, int iCnt){
    while(*src != '\0') {
        src++;
    }
    while((*dest != '\0') && (iCnt != 0)){      //Copy contents of destination in source
        *src = *dest;
        dest++;
        src++;
        iCnt--;
    }
    *dest = '\0';
}

int main(){
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";
    int n = 5;

    StrNCatX(arr, brr, 5);

    printf("%s", arr);

    return 0;
} 