#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  double x, y, X, Y;
  cin >> x >> y >> X >> Y;
  double dx = X - x;
  double dy = Y - y;
  double r = sqrt(dx * dx + dy * dy);
  double th = (double) 360 / N * acos(-1) / 180.0;
  double x0 = x - (x + X) / 2;
  double y0 = y - (y + Y) / 2;
  double x1 = cos(th) * x0 - sin(th) * y0;
  double y1 = sin(th) * x0 + cos(th) * y0;
  cout << setprecision(16);
  cout << x1 + (x + X) / 2 << " " << y1 + (y + Y) / 2 << endl;
  return 0;
}
