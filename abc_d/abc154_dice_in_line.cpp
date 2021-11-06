#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<double> p(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> p[i];
  }

  vector<double> v(1001, 0);
  v[1] = 1;
  for (int i = 2; i <= 1000; ++i)
  {
    v[i] = v[i - 1] + i;
  }

  vector<double> sum(N + 1, 0);
  sum[1] = p[0];
  for (int i = 2; i <= N; ++i)
  {
    sum[i] = sum[i - 1] + p[i - 1];
  }

  double temp = 0;
  int iter = 0;
  for (int i = 0; i <= N - K; ++i)
  {
    if (temp <= sum[K + i] - sum[i])
    {
      iter = i;
      temp = sum[K + i] - sum[i];
    }
  }

  double ans = 0;
  for (int i = iter; i < iter + K; ++i)
  {
    ans += v[p[i]] / p[i];
  }

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
