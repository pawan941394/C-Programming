#include<iostream>
using namespace std;
int main(){
    // Ques2. Program to display multiplication table upto 10
    int table_no,sum=0;
    cout<<"Enter your table number"<<endl;;
    
    cin>>table_no;
    cout<<"Your table is"<<endl;
    for(int i=1;i<=10;i++){
        cout<<table_no<<"*"<<i<<"=";
        sum=(table_no*i);
        cout<<sum<<endl;

        
    }
    return 0;
}