// 4. Write generic program to accept N values and search last occurence of any specific value.

// Input: 10  20  30  10  30  40  10  40  10
// Value to search: 40
// Output: 8


#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr, int iSize, T iNo){
    int LastInd = -1;
    for(int i = 0; i < iSize; i++){
        if(arr[i] == iNo){
            LastInd = i;
        }
    }
    cout<<endl;
    
    return LastInd;
}

int main(){
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 40);

    cout << iRet << endl;

    return 0;
}