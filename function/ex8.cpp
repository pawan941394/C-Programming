#include<iostream>
using namespace std;
void eo(int n){
    if(n%2!=0){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
    return;
}
int main(){
    int n;
    cin>>n;
    eo(n);
    return 0;

}