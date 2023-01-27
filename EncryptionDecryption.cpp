// WAP to decrypt a message which was retrieved from a suspious person which is "dnotq";

#include<iostream>

using namespace std;

int main(){
    char encryptedMsg[]={'d','n','o','t','q'};
    int len = sizeof(encryptedMsg) / sizeof(encryptedMsg[0]);
    char decrypt[len];
    int prev=1;

    for (int i = 0; i < len; i++)
    {
        char ch = encryptedMsg[i];
        int asciiValue = ch;

        int actualValue = asciiValue - prev;

        while(actualValue<97){
            actualValue = actualValue+26;
        }
        char originalChar = (char)actualValue;
        decrypt[i]=originalChar;
        prev=asciiValue;
    }

    for(int i=0; i<len; i++){
        cout<<decrypt[i];
    }
    
    return 0;
}