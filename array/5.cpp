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
 
if(array[0]<array[i]){
    array[0]= array[i];
}
}
cout<<endl<<"total sum is "<<total<<endl
;
cout<<"Largest number in this array is the "<<array[0];
return 0;

}