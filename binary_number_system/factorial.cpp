#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial;
    cin>>n;
    if(n==0){
        cout<<"0";
    }
    else{
        for(int i=1;i<=n; i++ ){
         factorial = n*i;

    }
    cout<<factorial;
    }
    return 0;

}