#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

int main()
{
  ll N, D, L, R;
  vector<P> LR;
  cin >> N >> D;
  for (int i = 0; i < N; ++i)
  {
    cin >> L >> R;
    LR.emplace_back(L, R);
  }
  sort(begin(LR), end(LR), [](P & a, P & b) {return a.second < b.second;});
  ll ans = 0, x = -(1LL << 40);
  for (auto & [l, r] : LR)
  {
    if (x + D - 1 < l)
    {
      ++ans, x = r;
    }
  }
  cout << ans << endl;
  return 0;
}
