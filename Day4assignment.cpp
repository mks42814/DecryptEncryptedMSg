/* Take an integer A as input, you have to tell whether it is a prime number or not. */

#include<iostream>
using namespace std;

bool primeCheck(int A){
    if (A == 0 || A == 1) {
      return false;
    }

    for (int i = 2; i < A; i++){
        if (A % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int A;
    cout<<"Enter a number: ";
    cin>>A;
    bool ans=primeCheck(A);
    if(ans==true){
        cout<<"Yes, it is a Prime number";
    }
    else{
        cout<<"No, it is not a prime number";
    }

    return 0;
}