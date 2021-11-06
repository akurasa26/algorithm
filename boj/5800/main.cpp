#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;
  int clazz = 0;
  while (n--)
  {
    v.clear();
    clazz++;
    int i;
    cin >> i;
    while (i--)
    {
      int j;
      cin >> j;
      v.push_back(j);
    }
    sort(v.begin(), v.end());
    int gap = 0;
    for (int i = 1; i < v.size(); i++)
    {
      if (v[i] - v[i - 1] > gap)
        gap = v[i] - v[i - 1];
    }
    cout << "Class " << clazz << "\n";
    cout
        << "Max " << v[v.size() - 1] << ", Min " << v[0] << ", Largest gap " << gap << "\n";
  }
  return 0;
}