// 1. Write a program which accepts file name form user and count number of capital characters from that file

// Input: Demo.txt
// Output: Number of capital charaters are 23


#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>     
#include<string.h>


int CountCapital(char FName[]){
    int fd = 0;     // fd: file descriptor
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
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z'){
                iCnt++;
            }
        }
    }

    return iCnt;
}


int main(){

    char FileName[30];
    int iRet = 0;

    printf("Enter the file name: \n");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital characters are %d", iRet);

    return 0;
}






