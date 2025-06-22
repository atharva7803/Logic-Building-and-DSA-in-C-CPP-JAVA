// 1. Write application which accept file name form user and create that file.

// Input: Demo.txt
// Output: File created successfully.


#include<stdio.h>
#include<unistd.h>      
#include<fcntl.h>     
#include<stdlib.h>


int main(){

    int fd = 0;         // fd: file descriptor
    char FileName[30];

    printf("Enter the file name that you want to create: \n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);     

    if(fd == -1){
        printf("Unable to crate file\n");
        return 0;
    }
    else{
        printf("File created successfully.\n");
    }
    
    return 0;
}



