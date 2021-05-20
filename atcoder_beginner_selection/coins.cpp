#include <iostream>
using namespace std;

int main()
{
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int sum = 0;
  int count = 0;
  for (int i = 0; i <= A; ++i)
  {
    for (int j = 0; j <= B; ++j)
    {
      for (int k = 0; k <= C; ++k)
      {
        sum = 500 * i + 100 * j + 50 * k;
        if (sum == X)
        {
          ++count;
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}
