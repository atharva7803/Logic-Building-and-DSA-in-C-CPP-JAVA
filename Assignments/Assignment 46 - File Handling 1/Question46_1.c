// 1. Write application which accept file name form user and open that file in read mode

// Input: Demo.txt
// Output: File opened successfully.


#include<stdio.h>
#include<unistd.h>      
#include<fcntl.h>     
#include<stdlib.h>


int main(){

    int fd = 0;         // fd: file descriptor
    char FileName[30];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);     

    if(fd == -1){
        printf("Unable to open file\n");
        return 0;
    }
    else{
        printf("File opened successfully.\n");
    }
    
    return 0;
}



