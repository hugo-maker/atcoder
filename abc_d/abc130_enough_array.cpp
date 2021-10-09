#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;
  vector<long long> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  vector<long long> sum(N);
  sum[0] = a[0];
  for (int i = 1; i < N; ++i)
  {
    sum[i] = sum[i - 1] + a[i];
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    long long num = K;
    if (i != 0)
    {
      num += sum[i - 1];
    }
    long long dist = sum.end() - lower_bound(sum.begin(), sum.end(), num);
    ans += dist;
  }

  cout << ans << endl;
  return 0;
}
