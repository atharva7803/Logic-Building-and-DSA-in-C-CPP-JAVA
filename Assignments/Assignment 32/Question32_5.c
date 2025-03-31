/*

5. Write a program which accept string from user and print below pattern.

Input:  "Marvellous"

Output:     m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  
            m   a   r   v   e   l   l   o   u   s  

Input: "PPA"

Ouput:  p   p   a
        p   p   a
        p   p   a

*/

#include<stdio.h>
#include<string.h>

void toLowerCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

void Pattern(char *str){
    int iLen = strlen(str);
    toLowerCase(str);
    for(int i = 0; i < iLen; i++){
        for(int j = 0; j < iLen; j++){
            printf("%c\t", str[j]);
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