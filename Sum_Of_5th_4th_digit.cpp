#include<iostream>
using namespace std;
int main(void){
    int num;
    cout<<"Enter the 5 digit number: ";
    cin>>num;
    int first_digit = num/10000;
    num%=10000;
    int second_digit = num/1000;
    num%=1000;
    int third_digit = num/100;
    num%=100;
    int forth_digit = num/10;
    int fifth_digit = num%10;
    int sum = forth_digit + fifth_digit;
    cout<<"The sum of 4th and 5th digit is "<<sum;
    return 0;
}