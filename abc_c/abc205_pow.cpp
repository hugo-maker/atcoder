#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if (C % 2 == 0)
  {
    if (abs(A) < abs(B))
    {
      cout << "<" << endl;
    }
    else if (abs(A) > abs(B))
    {
      cout << ">" << endl;
    }
    else
    {
      cout << "=" << endl;
    }
  }
  else
  {
    if (A < B)
    {
      cout << "<" << endl;
    }
    else if (A > B)
    {
      cout << ">" << endl;
    }
    else
    {
      cout << "=" << endl;
    }
  }

  return 0;
}
