#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double a, b, x;

double f(double t)
{
  if (tan(t) <= b / a)
  {
    return a * b - a * (a * tan(t)) / 2;
  }
  else
  {
    return b * (b / tan(t)) / 2;
  }
}

int main()
{
  const double PI = acos(-1.0);
  cin >> a >> b >> x;
  x /= a;


  double left = 0, right = PI / 2;
  for (int iter = 0; iter < 100; ++iter)
  {
    double mid = (left + right) / 2;
    if (f(mid) >= x)
    {
      left = mid;
    }
    else
    {
      right = mid;
    }
  }

  cout << fixed << setprecision(10) << left * 180 / PI << endl;
  return 0;
}
