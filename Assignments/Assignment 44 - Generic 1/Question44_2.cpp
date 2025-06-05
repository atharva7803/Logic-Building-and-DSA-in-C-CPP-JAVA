// 2. Write generic program to find largest number from three numbers.

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3) {
    T max;

    if(no1 > no2){
        if(no1 > no3){
            max = no1;
        }
        else{
            max = no3;
        }
    }
    else{
        if(no2 > no3){
            max = no2;
        }
        else{
            max = no3;
        }
    }

    return max;
}

int main() {
    int iRet = Max(10, 50, 40);
    cout<< iRet <<endl;

    float fRet = Max(10.01f, 20.48f, 5.56f);
    cout<< fRet <<endl;

    return 0;
}
