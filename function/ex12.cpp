#include<iostream>
using namespace std;
void vote(int n){
    if(n>18){
        cout<<"You are eligible";

    }
    else{
        cout<<"You are chota bacha baad me aayo vote dene ";
    }
}
int main(){
    int n;
    cout<<"Enter your age = ";
    cin>>n;
    vote(n);
    return 0;
}