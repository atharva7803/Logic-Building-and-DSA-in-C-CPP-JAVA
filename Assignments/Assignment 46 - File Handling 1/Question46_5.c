// 5. Write application which accept file name form user and one string from user. Write that string at the end of file.

// Input: Demo.txt
//        Hello World

// Output: Write Hello World at the end of Demo.txt file.


#include<stdio.h>
#include<unistd.h>      
#include<fcntl.h>     
#include<stdlib.h>
#include<string.h>


int main(){

    int fd = 0;    
    char FileName[30];
    char Arr[100];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);     

    if(fd == -1){
        printf("Unable to open file\n");
        return 0;
    }
    
    printf("Enter the data that you want to write: \n");
    scanf(" %[^'\n']s", Arr);       // give space before % to refresh the buffer

    write(fd, Arr, strlen(Arr));

    return 0;
}






