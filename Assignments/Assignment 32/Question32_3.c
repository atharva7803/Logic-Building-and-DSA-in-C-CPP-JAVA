/*

3. Write a program which accept string from user and print below pattern.

Input: "PPA"

Ouput:  P 
        P   P   
        P   P   A

*/

#include<stdio.h>
#include<string.h>

void Pattern(char *str){
    int iLen = strlen(str);
    for(int i = 0; i < iLen; i++){
        for(int j = 0; j < iLen; j++){
            if(i >= j){
                printf("%c\t", str[j]);
            }
        }
        printf("\n");
    }
}

int main(){
    char arr[30];

    printf("Enter String: \n");
    scanf("%[^'\n']s", arr);

    Pattern(arr);

    return 0;
} 