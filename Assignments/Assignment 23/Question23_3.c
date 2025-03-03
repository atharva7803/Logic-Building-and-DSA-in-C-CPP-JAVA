// 3. Accept Character from user and check whether it is capital or not (A-Z).

// Input: F
// Output: TRUE

// Input: d
// Output: FALSE

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch){
    bool bFlag = false;
    if(ch >= 'A' && ch <= 'Z'){
        bFlag = true;
    }
    return bFlag;
}

int main(){ 
    char cValue = '\0'; 
    bool bRet = false;

    printf("Enter the character: "); 
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true){
        printf("It is Capital Character!");
    }
    else{
        printf("It is not a Capital Character!"); 
    }

    return 0;
}