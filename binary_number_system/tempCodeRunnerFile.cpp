#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << " 0 " << endl;
    }
    else if (n == 1)
    {
        cout << " 1 " << endl;
    }
    else
    {
        float series, a = 0, b = 1, i = 3;
        cout << a << " " << b << " "<<endl;
        while (i <= n)
        {
            series = a + b;
            cout <<series << " "<<endl;
            a = b;
            b = series;
            i++;
        }
    }

    return 0;
}