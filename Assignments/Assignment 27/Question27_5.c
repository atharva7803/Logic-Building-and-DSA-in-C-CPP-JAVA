// 5. Write a program which accept string from user reverse that string in place.

// Input: "abcd"
// Ouput: "dcba"

// Input: "abba"
// Ouput: "abba"

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int strRevX(char *str){
    int left = 0; 
    int right = strlen(str) - 1; 
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(){
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    strRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
} 