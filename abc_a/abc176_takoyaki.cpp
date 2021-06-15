#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  cout << fixed;
  double N, X, T;
  cin >> N >> X >> T;

  long res = ceil(N / X) * T;
  cout << res << endl;

  return 0;
}
