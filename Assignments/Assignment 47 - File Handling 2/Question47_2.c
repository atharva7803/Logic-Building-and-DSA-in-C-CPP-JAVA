// 2. Write a program which accepts file name form user and count number of small characters from that file

// Input: Demo.txt
// Output: Number of capital charaters are 21

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<io.h>

int CountSmall(char FName[]){
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
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z'){
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

    iRet = CountSmall(FileName);

    printf("Number of Small characters are: %d", iRet);
    return 0;
}