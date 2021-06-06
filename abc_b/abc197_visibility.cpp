#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;

  X -= 1;
  Y -= 1;

  vector<string> v(H);

  for (int i = 0; i < H; ++i)
  {
    cin >> v[i];
  }

  auto pos = v[X][Y];
  int count = 0;

  // 左方向
  for (int i = Y; i >= 0; --i)
  {
    if (v[X][i] == '.')
    {
      ++count;
    }
    else
    {
      break;
    }
  }

  // 右方向
  for (int i = Y + 1; i < W; ++i)
  {
    if (v[X][i] == '.')
    {
      ++count;
    }
    else
    {
      break;
    }
  }

  // 上方向
  for (int i = X - 1; i >= 0; --i)
  {
    if (v[i][Y] == '.')
    {
      ++count;
    }
    else
    {
      break;
    }
  }

  // 下方向
  for (int i = X + 1; i < H; ++i)
  {
    if (v[i][Y] == '.')
    {
      ++count;
    }
    else
    {
      break;
    }
  }

  cout << count << endl;

  return 0;
}
