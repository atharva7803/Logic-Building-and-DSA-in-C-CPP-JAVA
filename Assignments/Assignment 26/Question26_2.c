// 2. Write a program which accept string from user and convert it into lower case.

// Input: "Marvellous Multi OS"
// Ouput: "marvellous multi os"

#include<stdio.h>
#include<string.h>

void struprx(char *str){
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        *str++;
    }
}

int main(){
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
} 