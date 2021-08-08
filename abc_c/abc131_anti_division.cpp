#include <iostream>
#include <numeric>
using namespace std;

int main()
{
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  long long tmp = B / C - (A - 1) / C + B / D - (A - 1) / D;
  long long ans = B - A - tmp + 1;

  long long temp = lcm(C, D);
  tmp = B / temp - (A - 1) / temp;

  ans += tmp;

  cout << ans << endl;
  return 0;
}
