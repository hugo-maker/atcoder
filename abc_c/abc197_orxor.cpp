#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  int ans = 1 << 30;
  for (int bit = 0; bit < (1 << N - 1); ++bit)
  {
    int now = 0;
    int o = 0;
    for (int i = 0; i < N; ++i)
    {
      o |= A[i];
      if (bit & (1 << i))
      {
        now ^= o;
        o = 0;
      }
    }
    now ^= o;
    ans = min(ans, now);
  }

  cout << ans << endl;
  return 0;
}
