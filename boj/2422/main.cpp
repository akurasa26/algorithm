#include <iostream>
using namespace std;

bool check[201][201];

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; ++i)
  {
    for (int j = i + 1; j <= n; ++j)
    {
      check[i][j] = true;
      check[j][i] = true;
    }
  }

  while (m--)
  {
    int i, j;
    cin >> i >> j;

    check[i][j] = false;
    check[j][i] = false;
  }
  int ans = 0;
  for (int i = 1; i <= n; ++i)
  {
    for (int j = i + 1; j <= n; ++j)
    {
      if (check[i][j] == true)
      {
        for (int k = j + 1; k <= n; ++k)
        {
          if (check[j][k] && check[i][k])
          {
            ans++;
          }
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}