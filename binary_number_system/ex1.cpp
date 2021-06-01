#include<iostream>
#include <cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     bool flag = 0;
     for(int i=2; i<=sqrt(n); i++){
         if(n%i==0){
             cout<<"NON PRIME NUMBER "<<endl;
             flag =1;
             break;
         }
     }
     if(flag==0){
         cout<<"This is prime number";

     }
     return 0;
}