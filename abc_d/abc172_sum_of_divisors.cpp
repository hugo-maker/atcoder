#include <iostream>
#include <vector>
using namespace std;

const long long MAX = 10000001;

int main()
{
  long long N;
  cin >> N;
  vector<long long> a(MAX, 1);
  for (long long i = 2; i < MAX; ++i)
  {
    for (long long j = 1; i * j < MAX; ++j)
    {
      ++a[i * j];
    }
  }
  long long ans = 0;
  for (long long i = 1; i <= N; ++i)
  {
    ans += i * a[i];
  }
  cout << ans << endl;
  return 0;
}
