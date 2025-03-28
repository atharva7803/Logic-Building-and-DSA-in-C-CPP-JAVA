// 3. Write a program which accept string from user and reverse each word in place.

// Input: "Marvellous Multi OS"
// Ouput: "suollevraM itluM SO"



#include<stdio.h>
#include<string.h>

void StrWrdRev(char *str){
    int iStart = 0, iEnd = 0;
    char temp;
    while(*str != '\0'){
        // To find the start of the word
        while (str[iStart] == ' ') {
            iStart++;
        }
        
        iEnd = iStart;
        
        // To find the end of the word
        while (str[iEnd] != '\0' && str[iEnd] != ' ') {
            iEnd++;
        }

        int wordEnd = iEnd - 1;
        while (iStart < wordEnd) {
            temp = str[iStart];
            str[iStart] = str[wordEnd];
            str[wordEnd] = temp;
            iStart++;
            wordEnd--;
        }
        iStart = iEnd;
    }
}

int main(){
    char arr[30];

    printf("Enter String: \n");
    scanf("%[^'\n']s", arr);

    StrWrdRev(arr);

    printf("Reversed string is: %d\n", arr);

    return 0;
} 