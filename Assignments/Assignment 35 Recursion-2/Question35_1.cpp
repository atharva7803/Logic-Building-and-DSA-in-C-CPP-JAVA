// 1. Write a recursive program which display below pattern.
// Input: 5
// Output: 5    *   4   *   3   *   2   *   1   *


#include<iostream>
using namespace std;

void Display(int iNo){
    if(iNo > 0){
        cout <<iNo<<"\t*\t";
        iNo--;
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