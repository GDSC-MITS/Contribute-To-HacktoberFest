#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0, u;
        cin >> n;
        u = n;
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            cin >> m;
            v.push_back(m);
        }
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 0)
            {
                count = 0;
                break;
            }
            else
            {
                for (int j = 0; j < u; j++)
                {
                    if (v[i] == v[j])
                    {
                        count = 0;
                        break;
                    }
                    else
                    {
                        count = 1;
                    }
                    u--;
                }
            }
        }
        if (count == 0)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n+1 << endl;
        }
    }
    return 0;
}