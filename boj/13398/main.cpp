//
// Created by jelly on 27/11/2019.
//
#include <iostream>

using namespace std;

int d1[100002];
int d2[100002];
int a[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    d1[1] = a[1];

    for (int i = 2; i <= n; i++)
    {
        d1[i] = a[i];
        if ((d1[i - 1] + d1[i]) > d1[i])
        {
            d1[i] = d1[i - 1] + d1[i];
        }
    }

    int max = d1[1];
    for (int i = 2; i <= n; i++)
    {
        if ((d1[i - 1] + d2[i + 1]) > max)
        {
            max = d1[i - 1] + d2[i + 1];
        }
        if (d1[i] > max)
        {
            max = d1[i];
        }
        if (d2[i] > max)
        {
            max = d2[i];
        }
    }

    cout << max;
    return 0;
}