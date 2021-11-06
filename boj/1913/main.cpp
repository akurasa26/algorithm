#include <iostream>
#include <string>
using namespace std;
int board[999][999];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  int pos = 0;
  cin >> n;
  cin >> pos;
  int c = n * n;
  int x = 0;
  int y = 0;
  for (int i = 0; i < 999; ++i)
  {
    for (int j = 0; j < 999; ++j)
    {
      board[i][j] = 0;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      board[i][j] = -1;
    }
  }

  while (c)
  {
    while (true)
    {
      if (x > 998 || board[x][y] != -1)
      {
        x--;
        y++;
        break;
      }
      board[x][y] = c;
      x++;
      c--;
    }
    while (true)
    {
      if (y > 998 || board[x][y] != -1)
      {
        y--;
        x--;
        break;
      }
      board[x][y] = c;
      y++;
      c--;
    }

    while (true)
    {
      if (x < 0 || board[x][y] != -1)
      {
        x++;
        y--;
        break;
      }
      board[x][y] = c;
      x--;
      c--;
    }

    while (true)
    {
      if (y < 0 || board[x][y] != -1)
      {
        y++;
        x++;
        break;
      }
      board[x][y] = c;
      y--;
      c--;
    }
  }
  int ax = 0;
  int ay = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (board[i][j] == pos)
      {
        ax = i + 1;
        ay = j + 1;
      }
      cout << board[i][j] << " ";
    }
    cout << "\n";
  }
  cout << ax << " " << ay << "\n";

  return 0;
}