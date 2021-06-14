#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long res1 = a * c;
  long long res2 = a * d;
  long long res3 = b * c;
  long long res4 = b * d;

  long long ans = max({res1, res2, res3, res4});

  cout << ans << endl;

  return 0;
}
