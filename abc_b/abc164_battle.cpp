#include <iostream>
using namespace std;

int main()
{
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  bool win = false;
  for (int i = 1; ; ++i)
  {
    if (i % 2 == 1)
    {
      C -= B;
      if (C <= 0)
      {
        win = true;
        break;
      }
    }
    else
    {
      A -= D;
      if (A <= 0)
      {
        win = false;
        break;
      }
    }
  }

  if (win)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
