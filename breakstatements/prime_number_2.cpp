#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the range of your numbers"<<endl;
    cout<<"Enter your first number = ";
    cin>>a;
    cout<<endl;
    cout<<"Enter your second number = ";
    cin>>b;
    cout<<endl;
    for (int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        } 
        if(i==num){
                cout<<num<<endl;

            }
    }

    
return 0;

}