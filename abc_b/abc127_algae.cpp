#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int r, D, x;
  cin >> r >> D >> x;

  vector<long long> X(11);
  X[0] = x;
  for (int i = 0; i < 10; ++i)
  {
    X[i + 1] = r * X[i] - D;
  }

  for (int i = 1; i < 11; ++i)
  {
    cout << X[i] << endl;
  }

  return 0;
}
