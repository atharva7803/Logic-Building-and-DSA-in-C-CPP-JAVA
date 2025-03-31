/*

4. Write a program which accept string from user and print below pattern

Input:  "Marvellous"

Output:     M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S
            M   A   R   V   E   L   L   O   U   S

Input: "PPA"

Ouput:  P   P   A
        P   P   A
        P   P   A

*/

#include<stdio.h>
#include<string.h>

void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

void Pattern(char *str){
    int iLen = strlen(str);
    toUpperCase(str);
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