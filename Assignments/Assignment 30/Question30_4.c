// 4. Accpet string from user and revers the contents of that string by toggling the case.

// Input: "aCBdef"
// Ouput: "FEDcbA"


#include<stdio.h>
#include<string.h>

void StrRevTogX(char *str){
    char temp;
    char *first, *last;
    first = str;
    last = str;

    while(*last != '\0'){
        last++;
    }
    last--;

    while(first <= last){
        // Toggle the case of first
        if (*first >= 'a' && *first <= 'z') {       
            *first = *first - 32; 
        } else if (*first >= 'A' && *first <= 'Z') {
            *first = *first + 32; 
        }
        
        // Toggle the case of last
        if (*last >= 'a' && *last <= 'z') {
            *last = *last - 32;
        } else if (*last >= 'A' && *last <= 'Z') {
            *last = *last + 32; 
        }
        temp = *first;
        *first = *last;
        *last = temp;

        first++;
        last--;
    }
}

int main(){
    char arr[30] = "Marvellous";

    StrRevTogX(arr);

    printf("%s", arr);

    return 0;
} 