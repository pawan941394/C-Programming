#include<iostream>
using namespace std;
int  main(){
    int n ,i;
    cout << "enter a number which you ant to check that this is prime or not "<<endl;
cin>>n;
for( i=2;i<=n-1;i++){
if(n%i==0){
    cout<<"This is not prime number"<<endl;
    break;

}}
if(i==n){
    
cout<<"This is prime number"<<endl;

}
return 0;

}