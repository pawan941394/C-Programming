#include <iostream>
using namespace std;
int formax(int a, int b, int c)
{
    if (a < b || b < c)
    {
        return c;
    }
    else if (b < a || a < c)
    {
        return a;
    }
    else
    {
        return c;
    }
}
int formin(int a, int b, int c)
{
    if (a < b || b < c)
    {
        return a;
    }
    else if (b < a || a < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c, min, max;
    cin >> a >> b >> c;
    max = formax(a, b, c);
    min = formin(a, b, c);
    cout << "this is for min " << min<<endl;
    cout << " this is for max " << max;
    return 0;
}