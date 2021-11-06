#include <iostream>
#include <vector>
#include <map>
#include <tuple>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;
  map<tuple<int, int, int>, bool> tv;
  vector<pair<int, int>> vp;
  vp.reserve(m + 1);
  for (int i = 1; i <= n; ++i)
  {
    for (int j = i + 1; j <= n; ++j)
    {
      for (int k = j + 1; k <= n; ++k)
      {
        tv[make_tuple(i, j, k)] = true;
      }
    }
  }

  while (m--)
  {
    int i, j;
    cin >> i >> j;

    vp.push_back(make_pair(i, j));
  }

  auto it = tv.begin();

  for (auto &p : vp)
  {
    for (it = tv.begin(); it != tv.end(); ++it)
    {
      if (!it->second)
      {
        continue;
      }
      tuple<int, int, int> t = it->first;
      int f = get<0>(t);
      int s = get<1>(t);
      int th = get<2>(t);
      if (f == p.first || s == p.first || th == p.first)
      {
        if (f == p.second || s == p.second || th == p.second)
        {
          it->second = false;
        }
      }
    }
  }
  int ans = 0;
  it = tv.begin();
  for (it = tv.begin(); it != tv.end(); ++it)
  {
    ans += it->second;
  }

  cout << ans << endl;
  return 0;
}