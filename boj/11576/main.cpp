#include <iostream>
#include <stack>
#include <cmath>

using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  double a, b;
  cin >> a >> b;

  stack<int> nums;
  int t;
  cin >> t;
  double sum = 0;
  while (t--)
  {
    double n;
    cin >> n;
    sum += pow(a, t) * n;
  }

  while (sum >= 1.0l)
  {
    t++;
    int a = ((int)sum) % (int)b;
    sum /= int(b);
    nums.push(a);
  }

  while (!nums.empty())
  {
    cout << nums.top() << " ";
    nums.pop();
  }

  return 0;
}