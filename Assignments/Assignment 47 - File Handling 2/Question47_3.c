// 3. Write a program which accepts file name form user and count number of white spaces from that file.

// Input: Demo.txt
// Output: Number of white spaces are 13

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

int CountWhite(char FName[]){
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
            if(Buffer[i] == ' '){
                iCnt++;
            }
        }
    }

    return iCnt;
}

int main(){
    char FileName[30];
    int iRet = 0;

    printf("Enter File name: ");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are: %d", iRet);
    return 0;
}