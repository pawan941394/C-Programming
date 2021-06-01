#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            cout<<"This is your skiped number "<<i<<endl;
            continue;

        }
else{
    cout<<i<<endl;
}
    }
    return 0;
}
