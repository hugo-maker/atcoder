#include <iostream>
using namespace std;

int find_some_of_digits(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }

  return sum;
}

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  int result = 0;
  for (int i = 1; i <= N; ++i)
  {
    int sum = find_some_of_digits(i);
    if (sum >= A && sum <= B)
    {
      result += i;
    }
  }

  cout << result << endl;

  return 0;
}
