#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a >= x && b >= y)
        {
            cout << "YES" << endl;
        }
        else if (a < x && b > y && a + c >= x)
        {
            cout << "YES" << endl;
        }
        else if (a > x && b < y && b + c >= y)
        {
            cout << "YES" << endl;
        }

        else if (a < x && b < y && a+b+c >= x+y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }


    return 0;
}