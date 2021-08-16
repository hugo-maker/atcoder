#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long double A, B;
  cin >> A >> B;

  long long c = floor(B);
  long double d = B - c;

  long long tmp = A * c;
  long double temp = A * d;
  long long ans = tmp + temp;
  cout << fixed << ans << endl;

  return 0;
}
