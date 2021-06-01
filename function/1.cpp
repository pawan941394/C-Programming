#include<iostream>
using namespace std;
int add(int n1, int n2){
    int sum = n1+ n2;
    return sum;
}
int main(){
    int n1, n2;
    cout<< "Enter the first number = ";
    cin>>n1;
     cout<< "Enter the second number = ";
    cin>>n2;
    cout<<add(n1,n2)<<endl;
    return 0;
}