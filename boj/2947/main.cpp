//
// Created by jelly on 2021/10/23.
//
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d, e, temp;
    cin >> a >> b >> c >> d >> e;
    while (true)
    {
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (d > e)
        {
            temp = d;
            d = e;
            e = temp;
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }
        if (a < b && b < c && c < d && d < e)
        {
            break;
        }
    }
    return 0;
}