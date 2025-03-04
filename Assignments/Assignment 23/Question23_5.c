// 5. Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 am , B at 8:30 am, C at 9:20 am and D at 10:30 am.(Application should be case insensitive)

// Input: C
// Output: Your exam at 9:20 am

// Input: d
// Output: Your exam at 10:30 am

#include <stdio.h>

void DisplaySchedule(char chDiv){
    if(chDiv == 'A' || chDiv == 'a'){
        printf("Your exam at 7 am");
    }
    else if(chDiv == 'B' || chDiv == 'b'){
        printf("Your exam at 8:30 am");
    }
    else if(chDiv == 'C' || chDiv == 'c'){
        printf("Your exam at 9:20 am");
    }
    else if(chDiv == 'D' || chDiv == 'd'){
        printf("Your exam at 10:30 am");
    }else{
        printf("Invalid Division!");
    }
}

int main(){ 
    char cValue = '\0'; 

    printf("Enter the character: "); 
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}