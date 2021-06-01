#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int total =0;
    int array[n];
for(int i =1; i<=n; i++){
    cin>>array[i];
      total = total +array[i];
 

}
cout<<endl<<"total sum is "<<total;
return 0;

}