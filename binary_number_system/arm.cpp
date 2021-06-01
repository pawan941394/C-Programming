#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0, org_num=n;
    while(n>0){
        int rem = n%10;
        sum = sum +pow(rem,3);
        n =n/10;

            }
            if(org_num==sum){
                cout<< " Arm strong";

            }
            else{
                cout<<"Not armstrong";
            }


}