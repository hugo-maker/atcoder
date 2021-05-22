#include <iostream>
using namespace std;

int main()
{
  int N, Y;
  cin >> N >> Y;

  bool is_possible = false;
  int result10000 = -1;
  int result5000 = -1;
  int result1000 = -1;
  int sum = 0;
  for (int i = 0; i <= N; ++i)
  {
    for (int j = 0; j + i <= N; ++j)
    {
      int k = N - i - j;
      sum = 10000 * i + 5000 * j + 1000 * k;
      if (sum == Y)
      {
        result10000 = i;
        result5000 = j;
        result1000 = k;
      }
    }
  }

  cout << result10000 << " " << result5000 << " " << result1000 << endl;

  return 0;
}
