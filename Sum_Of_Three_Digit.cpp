#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int first_digit = num/100;
    num%=100;
    int second_digit = num/10;
    int third_digit = num%10;
    int sum = first_digit + second_digit + third_digit;
    cout<<"The sum of all the three digits is "<<sum;
    return 0;
}