#include<iostream>
using namespace std;
int main(void){
    int sizeOfInt = sizeof(int);
    int sizeOfChar = sizeof(char);
    int sizeOfShort = sizeof(short);
    int sizeOfLong = sizeof(long);
    int sizeofLongLong = sizeof(long long);
    cout<<"The size of int is "<<sizeOfInt;
    cout<<endl<<"The size of char is "<<sizeOfChar;
    cout<<endl<<"The size of short is "<<sizeOfShort;
    cout<<endl<<"The size of Long is "<<sizeOfLong;
    cout<<endl<<"The size of long long is "<<sizeofLongLong;
    return 0;
}