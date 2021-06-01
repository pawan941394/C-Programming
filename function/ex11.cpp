#include<iostream>
using namespace std;
void swag(int a, int b){
int chan;

chan= a;
a=b;
b= chan;


cout<<"this is for a = " <<a<<endl;
cout<<"this is for b = "<<b;

return;
}
int main(){
    int a, b;
    cin>>a>>b;
    swag(a,b);
    return 0;


}