#include<iostream>
using namespace std;
int main(){

    // find the sum n number;

    int n, sum=0;
    cout<<"Enter you number here = ";
    cin>>n;
    for(int counter=1;counter<=n; counter++){
        sum = sum+counter;
    }
    
    cout<<"Your total number of eum is here = "<<sum;
return 0;
}