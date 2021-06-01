    #include <iostream>
    #include <algorithm>
    #include <climits>
    using namespace std;
    int main()
    {
        int n;
        cout << "Enter the size of your array " << endl;
        cin >> n;
        int array[n];
        cout << "Enter your array values " << endl;
        for (int i = 0; i <= n; i++)
        {
            cout << "your " << i << " "
                 << "array value type here = ";
            cin >> array[i];
        }
        cout << "your array values  are = ";
        for (int i = 0; i <= n; i++)
        {
            cout << "your  " << i << " "
                 << "array value  here = " << endl;
            cout << array[i];
            cout << endl;
        }
        int maxNo = INT_MAX;
        int minNo = INT_MIN;
        for (int i = 0; i <n; i++)
        {
        maxNo =  max(maxNo, array[i]);
        minNo = min(minNo , array[i]);
        }
        cout<<minNo<<endl;
        cout<<maxNo<<endl;
        return 0;
    }