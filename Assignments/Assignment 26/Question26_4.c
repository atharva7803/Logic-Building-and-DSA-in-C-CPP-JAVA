// 4. Write a program which accept string from user and toggle the case.

// Input: "marve89llous121"
// Ouput: 89121

// Input: "Demo"
// Ouput: 

#include<stdio.h>
#include<string.h>

void DisplayDigit(char *str){
    while(*str != '\0'){
        if(*str >= '0' && *str <= '9'){
            printf("%c", *str);
        }
        *str++;
    }
}

int main(){
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
} 