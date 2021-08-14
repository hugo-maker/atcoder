#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  for (int i = 1; i <= 1250; ++i)
  {
    if (floor(i * 0.08) == A && floor(i * 0.1) == B)
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
