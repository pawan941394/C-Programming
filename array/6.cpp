#include <iostream>
using namespace std;
int main()
{
    int n;
        cout<<"Enter the size of array "<<endl;
cin>>n;
 cout<<"Enter the Elements which you want to print"<<endl;
    int array[n];

    for (int i = 1; i <= n; i++)
    {
        cin>>array[i];
    }
    int sea, key, index=0;
    cout<<"Enter the keyword which you want to search"<<endl;
    cin>>sea;
    for (int j = 1; j <= n; j++)
    {
        if (sea == array[j])
        {
            
           key = array[j];
           index = j;
        }
        
     
    }
    if(key==sea){
        cout<<"This is available "<<key<<" and the index is "<<index<<endl;
        
    }
    else {
        cout<<key<< " THis isn not availabe";
    }

    return 0;
}