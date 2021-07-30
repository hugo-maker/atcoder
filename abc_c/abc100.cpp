#include <iostream>
#include <vector>
using namespace std;

int solve(long long n)
{
  int res = 0;
  while (n % 2 == 0)
  {
    ++res;
    n /= 2;
  }

  return res;
}

int main()
{
  int N;
  cin >> N;
  vector<long long> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += solve(a[i]);
  }

  cout << ans << endl;
  return 0;
}
