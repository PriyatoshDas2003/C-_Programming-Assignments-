#include<iostream>
using namespace std;
int main(void){
    int a,b;
    cout<<"Enter the two numbers ";
    cin>>a>>b;
    cout<<((a<50)&&(a<b))?1:0;
    return 0;
}