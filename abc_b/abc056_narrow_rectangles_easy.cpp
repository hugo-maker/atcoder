#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int W, a, b;
  cin >> W >> a >> b;

  int res;
  if (b >= a && b <= a + W ||
      b + W >= a && b + W <= a + W)
  {
    res = 0;
  }
  else
  {
    res = min(abs(b - (a + W)), abs(a - (b + W)));
  }

  cout << res << endl;
}
