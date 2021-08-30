#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1e9 + 7;

int main()
{
  int N;
  cin >> N;
  vector<int> C(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> C[i];
  }

  sort(C.begin(), C.end());
  long long ans = 1;
  for (int i = 0; i < N; ++i)
  {
    ans *= (C[i] - i);
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
