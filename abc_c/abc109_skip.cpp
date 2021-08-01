#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
  long long N, X;
  cin >> N >> X;
  vector<long long> x(N + 1);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i];
  }

  if (N == 1)
  {
    cout << max(x[0] - X, X - x[0]) << endl;
    return 0;
  }

  x[N] = X;
  sort(x.begin(), x.end());
  vector<long long> diff(N);
  for (int i = 0; i < N; ++i)
  {
    diff[i] = x[i + 1] - x[i];
  }

  long long D = accumulate(diff.begin(), diff.end(), 0,
      [](long long m, long long n) {return gcd(m, n);});

  cout << D << endl;
  return 0;
}
