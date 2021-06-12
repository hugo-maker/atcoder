#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int sum_a = 0;
  while (A)
  {
    sum_a += A % 10;
    A /= 10;
  }

  int sum_b = 0;
  while (B)
  {
    sum_b += B % 10;
    B /= 10;
  }

  cout << max(sum_a, sum_b) << endl;

  return 0;
}
