// 2. Accept number of rows and number of columns from user and display below pattern.

// Input:
// iRow = 4
// iCol = 4

// Output:  A   B   C   D
//          a   b   c   d
//          A   B   C   D
//          a   b   c   d


#include<stdio.h>

void Pattern(int iRow, int iCol){
     for(int i = 1; i <= iRow; i++){
        char ch;
        if(i % 2 == 0){
            ch = 'a';
        } else{
            ch = 'A';
        }
        for(int j = 1; j <= iCol; j++, ch++){
            printf("%c\t", ch);
        }
        printf("\n");
    }
}

int main(){

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: "); 
    scanf("%d %d", &iValue1, &iValue2);

    Pattern (iValue1, iValue2);

    return 0;

}