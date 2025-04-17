// 4. Write a recursive program which accept number from user and return smallest digits.

// Input: 87983
// Output: 3


#include<iostream>
using namespace std;

int Min(int iNo){
    static int iMin = 0;
    static int iDigit = 0;
    int i = 1;
    if(i <= iNo){
        iDigit = iNo % 10;
        if(iDigit < iMin){
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Min(iValue);

    cout<<iRet<<endl;

    return 0;
}