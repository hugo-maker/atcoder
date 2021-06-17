#include <iostream>
using namespace std;

int main()
{
  int X, Y;
  cin >> X >> Y;

  int crane = 0;
  int turtle = 0;
  bool ok = false;
  for (int c = 0; c <= X; ++c)
  {
    crane = c * 2;
    turtle = (X - c) * 4;

    if (crane + turtle == Y)
    {
      ok = true;
      break;
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
