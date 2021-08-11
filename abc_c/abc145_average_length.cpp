#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
  cout << setprecision(20);
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; ++i)
  {
    p[i] = i;
  }

  vector<double> x(N);
  vector<double> y(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i] >> y[i];
  }

  double ans = 0.0;
  double cnt = 0.0;
  do
  {
    for (int i = 1; i < N; ++i)
    {
      ans += sqrt((x[p[i]] - x[p[i - 1]]) * (x[p[i]] - x[p[i - 1]]) + 
                 (y[p[i]] - y[p[i - 1]]) * (y[p[i]] - y[p[i - 1]]));
    }
    ++cnt;
  } while (next_permutation(p.begin(), p.end()));

  ans /= cnt;
  cout << ans << endl;
  return 0;
}
