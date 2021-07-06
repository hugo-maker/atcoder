#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<vector<char>> S(H + 2, vector<char>(W + 2, '.'));
  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      cin >> S[i][j];
    }
  }

  vector<vector<int>> v(H + 2, vector<int>(W + 2, 0));

  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      if (S[i][j] == '#')
      {
        ++v[i - 1][j - 1];
        ++v[i - 1][j];
        ++v[i - 1][j + 1];
        ++v[i][j - 1];
        ++v[i][j + 1];
        ++v[i + 1][j - 1];
        ++v[i + 1][j];
        ++v[i + 1][j + 1];
      }
    }
  }

  for (int i = 1; i <= H; ++i)
  {
    for (int j = 1; j <= W; ++j)
    {
      if (S[i][j] == '#')
      {
        cout << '#';
      }
      else
      {
        cout << v[i][j];
      }
    }
    cout << endl;
  }

  return 0;
}
