#include<iostream>
using namespace std;
int main(void){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int cube = num*num*num;
    cout<<"The cube of "<<num<<" is "<<cube;
    return 0;
}