#include <iostream>
using namespace std;
void check(int a, int b, int c)
{
    if (a > b && b > c)
    {
        if ((a * a )== (b * b) + (c * c))
        {
            cout <<" ha ya";
        }
        else
        {
            cout << "not pythagorian";
        }
    }
   else if (b > a && a > c)
    {
         if ((b * b )== (a * a) + (c * c))
        {
            cout <<" ha ya";
        }
        else
        {
            cout << "not pythagorian";
        }
    }
    else
    {

          if ((c * c )== (a * a) + (b * b))
        {
            cout <<" ha ya";
        }
        else
        {
            cout << "not pythagorian";
        }
    }

    return;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    check(a, b, c);

        return 0;
}