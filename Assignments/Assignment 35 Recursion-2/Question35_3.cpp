// 2. Write a recursive program which accept string from user and count number of characters.

// Input: Hello
// Output: 5


#include<iostream>
using namespace std;

int Strlen(char *str){
    static int iCnt = 0;
    if(*str != '\0'){
        iCnt++;
        str++;
        Strlen(str);
    }
    return iCnt;
}

int main(){

    int iRet = 0;
    char arr[30];

    cout<<"Enter string: "<<endl;
    cin.getline(arr,30);

    iRet = Strlen(arr);

    cout<<iRet<<endl;

    return 0;
}