/*

2. Write a program which accept string from user and print below pattern

Input:  "Marvellous"

Output:     M   a   r   v   e   l   l   o   u   s
            M   a   r   v   e   l   l   o   u
            M   a   r   v   e   l   l   o
            M   a   r   v   e   l   l
            M   a   r   v   e   l
            M   a   r   v   e
            M   a   r   v
            M   a   r
            M   a
            M

Input: "PPA"

Ouput:  P   P   A
        P   P
        P

*/

#include<stdio.h>
#include<string.h>

void Pattern(char *str){
    int iLen = strlen(str);
    for(int i = 0; i < iLen; i++){
        for(int j = 0; j < iLen; j++){
            if(iLen - i - 1 >= j){
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