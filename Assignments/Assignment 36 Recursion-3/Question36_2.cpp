// 2. Write a recursive program which accept number from user and return largest digits.

// Input: 87983
// Output: 9


#include<iostream>
using namespace std;

int Max(int iNo){
    static int iMax = 0;
    static int iDigit = 0;
    int i = 1;
    if(i <= iNo){
        iDigit = iNo % 10;
        if(iDigit > iMax){
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Max(iValue);

    cout<<iRet<<endl;

    return 0;
}