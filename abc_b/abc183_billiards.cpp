#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  cout << setprecision(20) << (sx * gy + gx * sy) / (sy + gy) << endl;

  return 0;
}
