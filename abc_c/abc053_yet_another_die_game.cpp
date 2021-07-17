#include <iostream>
using namespace std;

int main()
{
  long long x;
  cin >> x;
  long long res = x / 11;
  res *= 2;

  if (x % 11 == 0)
  {
    cout << res << endl;
  }
  else if (x % 11 <= 6)
  {
    cout << res + 1 << endl;
  }
  else if (x % 11 >= 7)
  {
    cout << res + 2 << endl;
  }

  return 0;
}
