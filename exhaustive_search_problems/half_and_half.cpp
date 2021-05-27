#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int cost = 0;
  int min = A * X + B * Y;
  for (int i = 1; i <= 100000; ++i)
  {
    cost = i * 2 * C + max(0, X - i) * A + max(0, Y - i) * B;
    if (cost < min)
    {
      min = cost;
    }
  }

  cout << min << endl;

  return 0;
}
