#include<iostream>
using namespace std;

int main(void){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    int AsciiValue = static_cast<int>(ch);
    cout<<"The ASCII value of "<<ch<<" is "<<AsciiValue;
    return 0;
}