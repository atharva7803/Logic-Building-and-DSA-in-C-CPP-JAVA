// 4. Write a program which accept string from user and copy the contents nto another string by removing extra white spaces.

// Input: "Marvel lous multi OS"
// Ouput: "Marvellous multi OS"


#include<stdio.h>
#include<string.h>

void StrCpyX(char *src, char *dest){
    int i = 0, j = 0;
    while(src[i] != '\0'){
        if(src[i] != ' ' && src[i+1] != ' '){
            dest[j] = src[i];
            j++;
        }
        else if(src[i] == ' ' && src[i+1] != ' '){
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
}

int main(){
    char arr[30] = "Marvel lous multi OS";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s",brr);

    return 0;
} 