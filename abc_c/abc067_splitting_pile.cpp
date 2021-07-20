#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> a(N);
  long long sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
    sum += a[i];
  }

  vector<long long> left(N - 1);
  vector<long long> right(N - 1);
  left[0] = a[0];
  right[0] = sum - left[0];

  long long ans = abs(left[0] - right[0]);
  for (int i = 1; i < N - 1; ++i)
  {
    left[i] = left[i - 1] + a[i];
    right[i] = sum - left[i];
    ans = min(ans, abs(left[i] - right[i]));
  }

  cout << ans << endl;

  return 0;
}
