#include <iostream>
using namespace std;

int get_divisor(int a)
{
  int ans = 1;

  for (int i = 2; i * i <= a; ++i)
  {
    int count = 0;
    while (a % i == 0)
    {
      ++count;
      a /= i;
    }
    ans *= (count + 1);
    if (a == 1)
    {
      break;
    }
  }
  if (a != 1)
  {
    ans *= 2;
  }

  return ans;
}

int main()
{
  int N;
  cin >> N;

  int result = 0;
  for (int i = 1; i <= N; i += 2)
  {
    if (get_divisor(i) == 8)
    {
      ++result;
    }
  }

  cout << result << endl;

  return 0;
}
