#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = acos(-1.0);

int main()
{
  cout << fixed << setprecision(10);
  double A, B, H, M;
  cin >> A >> B >> H >> M;
  double alpha = (H * 60 + M) / 720 * (PI * 2);
  double beta = M / 60 * (PI * 2);
  double theta = alpha - beta;
  double ans = sqrt(A * A + B * B - 2.0 * A * B * cos(theta));
  cout << ans << endl;
  return 0;
}
