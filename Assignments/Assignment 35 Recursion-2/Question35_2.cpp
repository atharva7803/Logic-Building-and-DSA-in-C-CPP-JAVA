// 2. Write a recursive program which accept number from user and return summation of its digits.

// Input: 879
// Output: 24


#include<iostream>
using namespace std;

int Sum(int iNo){
    static int i = 0;
    static int iSum = 0;
    int iDigit = 0;
    if(i <= iNo){
        iSum = iSum + (iNo % 10);
        i++;
        Sum(iNo / 10);
    }
    return iSum;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<iRet<<endl;

    return 0;
}