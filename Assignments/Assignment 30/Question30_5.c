// 4. Accpet string from user and check whether the string is palindrome or not without considering its case.

// Input: "1abccBA1"
// Ouput: true


#include<stdio.h>
#include<stdbool.h>
#include<string.h>

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32; 
    }
    return ch; 
}

bool StrPalindrome(char *str){
    int i = 0, j = strlen(str) - 1;
    bool bFlag = true;
    
    while(i < j){
        if(toLowerCase(str[i]) != toLowerCase(str[j])){
            bFlag = false;
            break;
        }
        i++;
        j--;
    }
    return bFlag;
}

int main(){
    bool bRet;
    char arr[30] = "abccBa";

    bRet = StrPalindrome(arr);

    if(bRet == true){
        printf("String is palindrome\n");
    } else{
        printf("String is not palindrome\n");
    }

    return 0;
} 