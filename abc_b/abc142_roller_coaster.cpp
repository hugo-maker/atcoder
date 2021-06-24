#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  sort(h.begin(), h.end());
  auto iter = lower_bound(h.begin(), h.end(), K);
  size_t ans = distance(iter, h.end());

  cout << ans << endl;

  return 0;
}
