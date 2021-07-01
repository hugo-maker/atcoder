#include <iostream>
using namespace std;

int solve(int n)
{
  int count = 0;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      ++count;
      if (n / i != i)
      {
        ++count;
      }
    }
  }

  return count;
}

int main()
{
  int N;
  cin >> N;

  int res = 0;
  for (int i = 1; i <= N; i += 2)
  {
    if (solve(i) == 8)
    {
      ++res;
    }
  }

  cout << res << endl;
  return 0;
}
