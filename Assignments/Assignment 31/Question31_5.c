// 4. Write a program which accept string from user and replace each occurence of first character of each word into capital case.

// Input: "marvellous infosystems by Piyush khairnar"
// Output: "Marvellous Infosystems By Piyush Khairnar"


#include<stdio.h>
#include<string.h>

void StrCap(char *str){
    int i=0;
    while(str[i] != '\0'){
        if(i==0 || str[i-1] == ' '){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
}

int main(){
    char arr[50] = "marvellous infosystems by Piyush khairnar";

    StrCap(arr);

    printf("%s",arr);

    return 0;
} 