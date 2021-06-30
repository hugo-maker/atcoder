#include <iostream>
using namespace std;

template <class T>
bool chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  int N;
  cin >> N;

  int min_diff = 1 << 29;
  int ans = -1;
  for (int i = 111; i <= 999; i += 111)
  {
    if (i - N >= 0)
    {
      if (chmin(min_diff, i))
      {
        ans = i;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
