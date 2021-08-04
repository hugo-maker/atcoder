#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<long long> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  sort(h.begin(), h.end());

  long long ans = 1LL << 60;
  for (int i = 0; K - 1 + i < N; ++i)
  {
    ans = min(ans, h[K - 1 + i] - h[i]);
  }

  cout << ans << endl;
  return 0;
}
