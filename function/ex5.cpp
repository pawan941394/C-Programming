#include<iostream>
using namespace std;
void fac(int number){
    int i,j=1;
    for(i= 1; i<=number; i++)
     {
          j = j*i;
    }
    
    cout << " factorial = "<<j<<endl;
    return;
}
int main(){

    int number;
    cin>>number;
    
    fac(number);
    return 0;
}