#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  if (n == 1 || n == 3)
  {
    cout << -1;
    return 0;
  }
  int five = n / 5;
  n %= 5;
  while (n % 2 != 0)
  {
    n += 5;
    five--;
  }
  int two = n / 2;
  cout << five + two;

  return 0;
}