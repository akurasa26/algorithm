#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int tx, ty;
  cin >> tx >> ty;
  int n;
  cin >> n;
  vector<int> xs;
  xs.push_back(0);
  xs.push_back(tx);
  vector<int> ys;
  ys.push_back(0);
  ys.push_back(ty);
  while (n--)
  {
    int x, y;
    cin >> x >> y;
    if (x == 0)
    {
      ys.push_back(y);
    }
    if (x == 1)
    {
      xs.push_back(y);
    }
  }

  sort(xs.begin(), xs.end());
  sort(ys.begin(), ys.end());

  vector<int> sq;

  for (int i = 1; i < xs.size(); i++)
  {
    for (int j = 1; j < ys.size(); j++)
    {
      sq.push_back((xs[i] - xs[i - 1]) * (ys[j] - ys[j - 1]));
    }
  }

  sort(sq.begin(), sq.end());

  cout << sq[sq.size() - 1] << endl;
  return 0;
}