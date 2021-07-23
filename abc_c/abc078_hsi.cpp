#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double N, M;
  cin >> N >> M;

  double temp = (M * 1900 + 100 * (N - M));
  double nums = pow(2, M);

  cout << temp * nums << endl;
  return 0;
}
