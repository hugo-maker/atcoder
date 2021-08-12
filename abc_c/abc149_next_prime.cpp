#include <iostream>
using namespace std;

bool is_prime(int n)
{
  int cnt = 0;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      ++cnt;
    }
  }

  if (cnt == 1)
  {
    return true;
  }
  return false;
}

int main()
{
  int X;
  cin >> X;
  if (X == 2)
  {
    cout << 2 << endl;
    return 0;
  }

  if (X % 2 == 0)
  {
    ++X;
  }

  for (int i = X; ; i += 2)
  {
    if (is_prime(i))
    {
      cout << i << endl;
      return 0;
    }
  }
}
