#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> s(H + 2, vector<char>(W + 2, '.'));
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      cin >> s[i][j];
    }
  }

  bool can = true;
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      if (s[i][j] == '#')
      {
        if (s[i][j - 1] == '.' && s[i][j + 1] == '.' &&
            s[i - 1][j] == '.' && s[i + 1][j] == '.')
        {
          can = false;
        }
      }
    }
  }

  if (can)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
