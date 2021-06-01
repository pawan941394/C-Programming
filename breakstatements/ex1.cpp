#include<iostream>
using namespace std;
int main(){
    // Examples
// Ques1. Write a program to print all odd numbers till n.
int n;

cout<<"Enter the number from where you want to add odd number ";
cin>>n;
for(int i = 0;i<=n;i++){
    if(i%2==0){
        continue;
    }
    cout<<i<<endl;
}

return 0;

}