#include <iostream>
using namespace std;

int get_digits_sum(int n)
{
  int res = 0;
  while (n)
  {
    res += n % 10;
    n /= 10;
  }

  return res;
}

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  int sum = 0;
  for (int i = 1; i <= N; ++i)
  {
    if (get_digits_sum(i) >= A && get_digits_sum(i) <= B)
    {
      sum += i;
    }
  }

  cout << sum << endl;
  return 0;
}
