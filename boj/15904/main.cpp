#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);

  int l = s.length();
  int i = 0;
  int check = 0;

  while (i < l)
  {
    if (s[i] == 'U')
    {
      check++;
      break;
    }
    i++;
  }
  while (i < l)
  {
    if (s[i] == 'C')
    {
      check++;
      break;
    }
    i++;
  }
  while (i < l)
  {
    if (s[i] == 'P')
    {
      check++;
      break;
    }
    i++;
  }
  while (i < l)
  {
    if (s[i] == 'C')
    {
      check++;
      break;
    }
    i++;
  }
  if (check == 4)
  {
    cout << "I love UCPC";
  }
  else
  {
    cout << "I hate UCPC";
  }
  return 0;
}