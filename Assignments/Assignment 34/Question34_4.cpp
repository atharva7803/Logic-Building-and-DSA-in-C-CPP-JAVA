// 4. Write a recursive program which display below pattern.
// Input: 6
// Output:      A   B   C   D   E   F


#include<iostream>
using namespace std;

void Display(int iNo){
    static char ch = 'A';            
    static int i = 1;            
    if(i <= iNo){
        cout <<ch<<"\t";
        ch++;
        i++;
        Display(iNo);
    }
}

int main(){

    int iValue = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}