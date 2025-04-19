// 5. Write a recursive program which accept number from user and return its reverse number.

// Input: 523
// Output: 325


#include<iostream>
using namespace std;

void Reverse(int iNo){
    static int iDigit = 0;
    if(iNo > 0){
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    Reverse(iValue);

    return 0;
}