// 5. Write a program which accepts file name and one count from user and read that number of characters from starting position.

// Input: Demo.txt      12
// Output: Display first 12 chracters from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h> 

void DisplayN(char FName[], int iSize) {
    int fd = 0;
    char Buffer[100] = {'\0'};
    int iRet = 0;

    fd = open(FName, O_RDWR);

    if (fd == -1) {
        printf("Unable to open file\n");
        return;
    }

    iRet = read(fd, Buffer, iSize);

    if (iRet == -1) {
        printf("Unable to read file\n");
        return;
    }

    Buffer[iRet] = '\0';
    printf("First %d characters: %s\n", iSize, Buffer);

}

int main() {
    char FileName[30];
    int iValue = 0;

    printf("Enter File name: ");
    scanf("%s", FileName);

    printf("Enter the number of characters: ");
    scanf("%d", &iValue);

    DisplayN(FileName, iValue);

    return 0;
}
