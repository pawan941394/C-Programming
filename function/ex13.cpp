#include<iostream>
using namespace std;
int sum(int num){
    int total =num*(num+1)/2;
    cout<<total<<endl;
    return total;
}
int main(){

    int n;
    cin>>n;
    sum(n);
    return 0;
}