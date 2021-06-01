#include<iostream>
using namespace std;
void fib(long n){
    int first_term=0;
    int second_term= 1;
    int next_term;
    if(n==0 ){
        cout<<"0";
    }else if(n==1){
        cout<<" 0 " <<" 1 ";
    }
    else{
        cout<<" 0 "  <<" 1 " ;
        for(int i=2; i<=n; i++){
            next_term= first_term +second_term;
            cout<<next_term << " ";
            first_term = second_term;
            second_term = next_term;


        }
    }
    return;

}
int main(){
    long a;
    cin>>a;
    fib(a);

    return 0;
}