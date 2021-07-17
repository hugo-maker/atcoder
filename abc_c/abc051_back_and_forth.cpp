#include <iostream>
#include <string>
using namespace std;

int main()
{
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  string res = "";

  // x軸方向
  for (int i = 0; i < tx - sx; ++i)
  {
    res += "R";
  }
  // y軸方向
  for (int i = 0; i < ty - sy; ++i)
  {
    res += "U";
  }
    
  // x軸方向
  for (int i = 0; i < tx - sx; ++i)
  {
    res += "L";
  }

  // y軸方向
  for (int i = 0; i <= ty - sy; ++i)
  {
    res += "D";
  }

  for (int i = 0; i <= tx - sx; ++i)
  {
    res += "R";
  }

  for (int i = 0; i <= ty - sy; ++i)
  {
    res += "U";
  }

  res += "LU";

  for (int i = 0; i <= tx - sx; ++i)
  {
    res += "L";
  }

  for (int i = 0; i <= ty - sy; ++i)
  {
    res += "D";
  }

  res += "R";

  cout << res << endl;

  return 0;
}
