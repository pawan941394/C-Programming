#include<iostream>
using namespace std;
int main(){
    // Ques3. Program to add only positive numbers.
    cout<<"If you want to add number then you have to give only positive number not gove negative number otherwise this will be exits"<<endl;
    int n , sum=0;
    cin>>n;
   if(n>0){
        while(n>0){
        sum=sum+n;
        n--;

    }
    cout<<"Total sum of your given number of is :"<<sum;
   }
   else{
       cout<<"You gave me a negative number i have exits";
   }

return 0;


}