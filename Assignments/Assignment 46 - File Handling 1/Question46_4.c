// 4. Write application which accept file name form user and display size of file.

// Input: Demo.txt
// Output: File size is 58 bytes.


#include<stdio.h>
#include<unistd.h>      
#include<fcntl.h>     
#include<stdlib.h>


int main(){

    int fd = 0;         
    char FileName[30];
    char buffer[100] = {'\0'};
    int iRet = 0;
    int iSum = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);     

    if(fd == -1){
        printf("Unable to open file\n");
        return 0;
    }

    while(iRet = read(fd, buffer, sizeof(buffer)) != 0){
        iSum += iRet;
    }     

    printf("File size is: %d\n", iSum);

    close(fd);
    
    return 0;
}



