// 5. Write a recursive program which display below pattern.
// Input: 6
// Output:      a   b   c   d   e   f


#include<iostream>
using namespace std;

void Display(int iNo){
    static char ch = 'a';            
    static int i = 1;            
    if(i <= iNo){
        cout <<ch<<"\t";
        ch++;
        i++;
        Display(iNo);
    }
}

int main(){

    int iValue = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}