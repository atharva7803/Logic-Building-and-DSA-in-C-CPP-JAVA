// 3. Write a recursive program which accept string from user and count of small characters.

// Input: HElloWOrlD
// Output: 5


#include<iostream>
using namespace std;

int Small(char *str){
    static int iCnt = 0;
    if(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            iCnt++;
        }
        str++;
        Small(str);
    }
    return iCnt;
}

int main(){

    int iRet = 0;
    char arr[30];

    cout<<"Enter string: "<<endl;
    cin.getline(arr,30);

    iRet = Small(arr);

    cout<<iRet<<endl;

    return 0;
}