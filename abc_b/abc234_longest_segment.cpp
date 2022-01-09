#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<double> x(N);
  vector<double> y(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i] >> y[i];
  }

  double ans = 0;
  double tmp = 0;
  for (int i = 0; i < N - 1; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      tmp = sqrt((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
      ans = max(ans, tmp);
    }
  }
  
  cout << setprecision(20);
  cout << ans << endl;
  return 0;
}
