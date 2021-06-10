#include <iostream>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if (C)
  {
    if (B - A >= 1)
    {
      cout << "Aoki" << endl;
    }
    else
    {
      cout << "Takahashi" << endl;
    }
  }
  else
  {
    if (A - B >= 1)
    {
      cout << "Takahashi" << endl;
    }
    else
    {
      cout << "Aoki" << endl;
    }
  }

  return 0;
}
