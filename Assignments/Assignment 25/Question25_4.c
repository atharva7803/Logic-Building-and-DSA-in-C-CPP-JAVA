// 4. Write a program which accept string from user and check whether it contains vowels in it or not.

// Input: "marvellous"
// Ouput: true

// Input: "Demo"
// Ouput: true

// Input: "xyz"
// Ouput: false

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool ChkVowel(char *str){
    bool bFlag = false;
    while(*str != '\0'){
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o'|| *str == 'u'){
            bFlag = true;
        }
        str++;
    }
    return bFlag;
}

int main(){
    char arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);
    if(bRet == true){
        printf("Contains Vowel!");
    } else{
        printf("There is no Vowel!");
    }

    return 0;
} 