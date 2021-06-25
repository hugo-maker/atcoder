#include <iostream>
using namespace std;

int get_digit(int n)
{
  int digit = 1;
  while (true)
  {
    n /= 10;
    if (n)
    {
      ++digit;
    }
    else
    {
      break;
    }
  }

  return digit;
}

int main()
{
  int N;
  cin >> N;

  int count = 0;
  for (int i = 1; i <= N; ++i)
  {
    if (get_digit(i) % 2 == 1)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
