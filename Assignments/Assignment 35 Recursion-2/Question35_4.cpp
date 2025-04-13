// 4. Write a recursive program which accept number from user and return its factorial.

// Input: 5
// Output: 120


#include<iostream>
using namespace std;

int Fact(int iNo){
    static int iFact = 1;
    static int i = 1;
    if(i <= iNo){
        iFact = iFact * i;
        i++;
        Fact(iNo);
    }
    return iFact;
}

int main(){

    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<iRet<<endl;

    return 0;
}