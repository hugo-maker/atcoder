#include <iostream>
using namespace std;

int main()
{
  long long A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  long long res = 0;
  long long AB = C * 2;

  if (AB < A + B)
  {
    if (X > Y)
    {
      if (AB > A)
      {
        res = AB * Y + A * (X - Y);
      }
      else
      {
        res = AB * X;
      }
    }
    else  //(X <= Y)
    {
      if (AB > B)
      {
        res = AB * X + B * (Y - X);
      }
      else
      {
        res = AB * Y;
      }
    }
  }
  else
  {
    res = A * X + B * Y;
  }

  cout << res << endl;
  return 0;
}
