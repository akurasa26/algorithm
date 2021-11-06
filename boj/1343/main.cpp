#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cin >> s;

  while (s.find("XXXX") != string::npos)
    s = s.replace(s.find("XXXX"), 4, "AAAA");
  while (s.find("XX") != string::npos)
    s = s.replace(s.find("XX"), 2, "BB");
  if (s.find("X") != string::npos)
    cout << -1;
  else
    cout << s;

  return 0;
}