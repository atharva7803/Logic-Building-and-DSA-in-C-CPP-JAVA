// 1. Write a recursive program which display below pattern.
// Input: 5
// Output: *   *   *   *   *


#include<iostream>
using namespace std;

void Display(int iNo){
    static int i = 0;            
    if(i < iNo){
        cout <<"*\t";
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