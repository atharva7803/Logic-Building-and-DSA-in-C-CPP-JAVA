// 4. Write a recursive program which accept number from user and return its product od digits.

// Input: 523
// Output: 30


#include<iostream>
using namespace std;

int Mult(int iNo){
    static int iMul = 1;
    static int iDigit = 0;
    int i = 1;
    if(i <= iNo){
        iDigit = iNo % 10;
        iMul = iDigit * iMul;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMul;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Mult(iValue);

    cout<<iRet<<endl;

    return 0;
}