#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<long long> x(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i];
  }

  long long res = 1LL << 60;
  for (int i = 0; i + K - 1 < N; ++i)
  {
    long long left = x[i];
    long long right = x[i + K - 1];
    res = min(res, min(abs(left), abs(right)) + right - left);
  }
  cout << res << endl;
  return 0;
}
