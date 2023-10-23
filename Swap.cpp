#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter the value of Num1: ";
    cin>>num1;
    cout<<"Enter the value of num2: ";
    cin>>num2;
    num1+=num2;
    num2=num1-num2;
    num1-=num2;
    cout<<"The value of num1 is "<<num1<<endl<<"The valueof num2 is "<<num2;
    return 0;
}