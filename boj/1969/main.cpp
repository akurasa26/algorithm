#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> v;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    v.push_back(s);
  }
  int min_s = n * n * m + 1;
  string ans = "";
  int ans_diff = 0;
  string dna = "ACGT";
  for (int k = 0; k < m; k++)
  {
    char temp;
    int s = n;
    for (int j = 0; j < 4; j++)
    {
      int diff = 0;
      for (int i = 0; i < n; i++)
      {
        if (dna[j] != v[i][k])
        {
          diff++;
        }
      }
      if (diff < s)
      {
        s = diff;
        temp = dna[j];
      }
    }
    ans.append(1, temp);
    ans_diff += s;
  }
  cout << ans << "\n"
       << ans_diff;
  return 0;
}