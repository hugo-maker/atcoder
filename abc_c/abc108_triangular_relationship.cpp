#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;

  vector<long long> num(K, 0);
  for (int i = 1; i <= N; ++i)
  {
    ++num[i % K];
  }
  long long ans = 0;
  for (int a = 0; a < K; ++a)
  {
    int b = (K - a) % K;
    int c = (K - a) % K;
    if ((b + c) % K != 0)
    {
      continue;
    }
    ans += num[a] * num[b] * num[c];
  }

  cout << ans << endl;
  return 0;
}
