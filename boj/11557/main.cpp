#include <iostream>
#include <string>

using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;

  while (t--)
  {
    int n = 0;
    cin >> n;
    int ml = 0;
    string maxSchool;

    for (int i = 0; i < n; i++)
    {
      int l;
      string school;
      cin >> school >> l;

      if (l > ml)
      {
        ml = l;
        maxSchool = school;
      }
    }
    cout << maxSchool << endl;
  }
  return 0;
}