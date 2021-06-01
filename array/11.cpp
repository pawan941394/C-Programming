#include<iostream>
using namespace std;
int main(){
    int n, max_value=-199999999;
    cin>>n;
    int array[n];
    for(int i =0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<" YOUR ARRAY max value is  "<<endl;
    for(int j = 0; j<n; j++){
        if (max_value < array[j])  
        max_value = array[j];
    }
    cout<<max_value;
    return 0;

}