#include<iostream>
using namespace std;
int fac(int number){
    int j=1;
    for(int i= 2; i<=number; i++)
     {
          j = j*i;
    }
 
   
 
    return j;
}
int main(){

    int number ,r;
    cout<<"n = ";
    cin>>number;

    cout<<"c = ";
    cin>>r;
    int left = number-r;
    
    int ans = fac(number)/(fac(r)*fac(left));
    cout<<ans;
    return 0;
}