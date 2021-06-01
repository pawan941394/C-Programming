#include <iostream>
using namespace std;
int main()
{

    // subarrays are the (n*n)+1/2
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current = current + array[j];
            cout << array[j] << endl;cout<<current<<endl;
        }
    }
    
    return 0;
}