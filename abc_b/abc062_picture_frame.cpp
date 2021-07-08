#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;

  vector<vector<char>> a(H + 2, vector<char>(W + 2, '#'));
  for (int i = 1; i < H + 1; ++i)
  {
    for (int j = 1; j < W + 1; ++j)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < H + 2; ++i)
  {
    for (int j = 0; j < W + 2; ++j)
    {
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}
