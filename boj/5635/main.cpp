#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> v;
  v.reserve(n);
  int last = n - 1;
  while (n--)
  {
    string name, mon, day, year;
    cin >> name >> day >> mon >> year;

    if (mon.length() == 1)
    {
      mon = "0" + mon;
    }
    if (day.length() == 1)
    {
      day = "0" + day;
    }

    v.push_back(year + mon + day + name);
  }
  sort(v.begin(), v.end());

  string young = v.back();
  string old = v.front();

  cout << young.substr(8) << "\n"
       << old.substr(8);

  return 0;
}