#include<iostream>
using namespace std;

int DisplaySum(int iNo){
    int iSum = 0;
    while(iNo > 0){
        iSum += iNo;
        iNo--;
    }
    return iSum;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = DisplaySum(iValue);

    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}