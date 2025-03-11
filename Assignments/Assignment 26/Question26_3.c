// 3. Write a program which accept string from user and toggle the case.

// Input: "Marvellous Multi OS"
// Ouput: "mARVELLOUS mULTI os"

#include<stdio.h>
#include<string.h>

void strtogglex(char *str){
    while(*str != '\0'){
        if(*str >= 'A' && *str <= 'Z'){
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        *str++;
    }
}

int main(){
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
} 