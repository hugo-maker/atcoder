#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<bool> issafe(N + 1, true);
  int a;
  for (int i = 0; i < M; ++i)
  {
    cin >> a;
    issafe[a] = false;
  }

  vector<long long> f(N + 1, 0);

  f[0] = 1;
  if (issafe[1])
  {
    f[1] = 1;
  }

  for (int i = 2; i <= N; ++i)
  {
    if (issafe[i - 1])
    {
      f[i] += f[i - 1];
    }
    if (issafe[i - 2])
    {
      f[i] += f[i - 2];
    }
    f[i] %= MOD;
  }

  cout << f[N] << endl;

  return 0;
}
