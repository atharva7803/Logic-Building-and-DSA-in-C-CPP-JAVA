// 4. Write a program which accepts file name and one character from user and count number of occurences of that characters from that file.

// Input: Demo.txt
// Output: Number of capital charaters are 21

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

int CountChar(char FName[], char Ch){
    int fd = 0;     
    char Buffer[100] = {'\0'};
    int iCnt = 0;
    int iRet = 0;

    fd = open(FName, O_RDWR);     

    if(fd == -1){
        printf("Unable to open file\n");
        return 0;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0) {      
        for(int i = 0; i < iRet; i++){
            if(Buffer[i] == Ch){
                iCnt++;
            }
        }
    }

    return iCnt;
}

int main(){
    char FileName[30];
    int iRet = 0;
    char cValue;

    printf("Enter File name: ");
    scanf("%s",FileName);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName, cValue);

    printf("Frequency is: %d", iRet);

    return 0;
}