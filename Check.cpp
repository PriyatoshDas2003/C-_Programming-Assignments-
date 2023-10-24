#include<iostream>
using namespace std;
int main(void){
    int num1,num2;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    bool flag;
    (num1==num2)?flag=true:flag=false;
    cout<<flag;
    return 0;
}