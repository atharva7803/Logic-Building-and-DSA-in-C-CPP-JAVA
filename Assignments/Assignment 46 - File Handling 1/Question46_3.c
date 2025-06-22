// 3. Write application which accept file name form user and read all data from that file and display contents on screen.

// Input: Demo.txt
// Output: Display all data of file.


#include<stdio.h>
#include<unistd.h>      
#include<fcntl.h>     
#include<stdlib.h>


int main(){

    int fd = 0;         
    char FileName[30];
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to read: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);     

    if(fd == -1){
        printf("Unable to open file\n");
        return 0;
    }

    iRet = read(fd, arr, 20);       // 10: to read first 10 characters form file
    printf("Data from file: %s\n", arr);
    
    return 0;
}



