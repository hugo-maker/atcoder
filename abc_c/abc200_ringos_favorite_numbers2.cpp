#include <iostream>
#include <vector>
using namespace std;

long long comb(long long n, long long k)
{
  long long res = 1;
  for (long long d = 1; d <= k; ++d)
  {
    res *= n--;
    res /= d;
  }

  return res;
}

int main()
{
  int N;
  cin >> N;
  vector<long long> v(200, 0);
  long long a;
  for (int i = 0; i < N; ++i)
  {
    cin >> a;
    ++v[a % 200];
  }

  long long ans = 0;
  for (int i = 0; i < 200; ++i)
  {
    ans += comb(v[i], 2);
  }

  cout << ans << endl;
  return 0;
}
