/* You are given an integer N and the task is to reverse the digits of the given integer */
#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    
    int reversed=0;
    int last_digit;
    while(N!=0){    
        last_digit=N%10;      
        reversed=reversed*10+last_digit;    
        N/=10;    
    }    
    cout<< reversed<<endl;   
    return 0;
}