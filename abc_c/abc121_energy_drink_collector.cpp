#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, M;
  cin >> N >> M;
  vector<pair<long long, long long>> AB(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> AB[i].first >> AB[i].second;
  }

  sort(AB.begin(), AB.end());
  long long ans = 0;
  long long rest = M;
  for (int i = 0; i < N && rest > 0; ++i)
  {
    ans += AB[i].first * min(rest, AB[i].second);
    rest -= AB[i].second;
  }

  cout << ans << endl;
  return 0;
}
