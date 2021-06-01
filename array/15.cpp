#include<iostream>
using namespace std;
int main(){
    int n, mx = -99999;
     int  a[n];
     cout<<"enter the size of your array";
     cin>>n;
     for(int i = 0; i<n; i++){
         cin>>a[i];


     }
      for(int i = 0; i<n; i++){
         
        mx = max(mx, a[i]);


     }      
       cout<<mx<<endl;
     return 0;
     
}