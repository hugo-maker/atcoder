#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N, C;
  cin >> N >> C;
  vector<pair<long long, long long>> event;
  for (long long i = 0; i < N; ++i)
  {
    long long a, b, c;
    cin >> a >> b >> c;
    event.emplace_back(a - 1, c);
    event.emplace_back(b, -c);
  }
  sort(event.begin(), event.end());
  long long ans = 0;
  long long fee = 0;
  long long t = 0;
  for (auto [x, y] : event)
  {
    if (x != t)
    {
      ans += min(C, fee) * (x - t);
      t = x;
    }
    fee += y;
  }
  cout << ans << endl;
  return 0;
}
