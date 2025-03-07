// 4. Accept character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

// Input: %
// Output: TRUE

// Input: d
// Output: FALSE

#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch) {
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*') {
        return true;
    }
    return false;
}

int main() {
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}