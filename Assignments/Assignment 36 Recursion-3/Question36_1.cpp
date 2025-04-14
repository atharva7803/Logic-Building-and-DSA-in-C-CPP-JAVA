// 1. Write a recursive program which accept string from user and count white spaces.

// Input: HE llo WOr LD
// Output: 3


#include<iostream>
using namespace std;

int WhiteSpace(char *str){
    static int iCnt = 0;
    if(*str != '\0'){
        if(*str == ' '){
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCnt;
}

int main(){

    int iRet = 0;
    char arr[30];

    cout<<"Enter string: "<<endl;
    cin.getline(arr,30);

    iRet = WhiteSpace(arr);

    cout<<iRet<<endl;

    return 0;
}