#include<iostream>
using namespace std;
int main(){
    cout<<"If you want to play game then play other number as compare to - means not give - value if you give then this will be exits "<<endl;
    int n ;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;

    }
    cout<<"You have successfully exits the game ";
    return 0;
}