#include <iostream>
using namespace std;

int main()
{
  int N, D, X;
  cin >> N >> D >> X;
  int A;
  int sum = X;
  for (int i = 1; i <= N; ++i)
  {
    cin >> A;
    for (int j = 1; j <= D; j += A)
    {
      ++sum;
    }
  }

  cout << sum << endl;
  return 0;
}
