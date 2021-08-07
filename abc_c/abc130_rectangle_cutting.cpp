#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
  cout << setprecision(20);

  long double W, H, x, y;
  cin >> W >> H >> x >> y;

  cout << W / 2.0 * H << " ";
  if (x == W / 2 && y == H / 2)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }

  return 0;
}
