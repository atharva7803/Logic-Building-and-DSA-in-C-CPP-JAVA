#include<iostream>
using namespace std;

int CountEven(int Arr[], int iSize){    // Using Recursion
    static int iCount = 0;
    static int i = 0;
    if(i < iSize){
        if(Arr[i] % 2 == 0){
            iCount++;
        }
        i++;
        CountEven(Arr, iSize);
    }
    return iCount;
}

int main(){

    int *arr = NULL;
    int iCnt = 0 , iRet = 0;

    cout<<"Enter number of elements: "<<endl;
    cin>>iCnt;

    arr = new int[iCnt];

    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < iCnt; i++){
        cin>>arr[i];
    }

    iRet  = CountEven(arr, iCnt);
    cout<<"Number of even elements are: "<<iRet<<endl;

    delete []arr;

    return 0;
}