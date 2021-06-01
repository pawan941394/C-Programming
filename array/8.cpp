#include<bits/stdc++.h>
using namespace std;
 int main(){
cout<<"Enter the size of your array"<<endl;

     int n;
     cin>>n;
cout<<"Enter the elements of your array "<<endl;

      int array[n];
      for(int i = 1; i<n ; i++){
          cin>>array[i];
      }
  sort(array, array + n);
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = n; i >=1;i--)
        cout << array[i] << " ";
  
    return 0;

 }